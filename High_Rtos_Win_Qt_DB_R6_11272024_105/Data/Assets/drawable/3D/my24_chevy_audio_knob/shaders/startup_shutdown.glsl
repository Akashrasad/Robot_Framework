#type vertex

layout(location = 0) in vec3 a_Position;
layout(location = 1) in vec2 a_TexCoord;
layout(location = 2) in vec3 a_Color;

uniform mat4 u_ViewProjectionMatrix;
uniform mat4 u_Transform;

out vec2 TxCoord;
out vec3 VertexColor;

void main()
{
    TxCoord = a_TexCoord;
    gl_Position = u_ViewProjectionMatrix * u_Transform * vec4(a_Position, 1.0f);
    VertexColor = a_Color;
}

#type fragment

struct Light {
	vec3 Direction;
	vec3 Radiance;
	float Multiplier;
};

layout(location = 0) out vec4 color;

in vec2 TxCoord;
in vec3 VertexColor;

uniform Light lights;
uniform vec3 u_CameraPosition;

// PBR texture inputs
uniform sampler2D u_AlbedoTexture;
uniform sampler2D u_yellow;
uniform sampler2D u_Texture;
uniform vec3 u_DiffuseColor;
uniform vec3 u_EmissiveColor;
uniform int u_IsTexture;

// Environment maps
uniform samplerCube u_EnvRadianceTex;
uniform samplerCube u_EnvIrradianceTex;

// BRDF LUT
uniform sampler2D u_BRDFLUTTexture;

uniform float u_needleAngle;
uniform int u_algo;
uniform float u_startAngle;
uniform float u_endAngle;

// globals
vec2 refVec = vec2(1.0f, 0.0f);      // +x axis

float linearInterpolation(float min_in, float max_in, float min_out, float max_out, float in_val)
{
    float out_val = min_out + (max_out - min_out) * ((in_val - min_in) / (max_in - min_in));
    return out_val;
}

void main()
{
float startAngle = u_startAngle;
if(startAngle > 270.0f || startAngle == 0.0f) startAngle = 270.0f;
float endAngle = u_endAngle;

vec4 texColor = texture(u_Texture, TxCoord);
if(u_needleAngle > 0.714f)
{
    float min_in = 0.714f, max_in = 1.0f;
    float min_out = texColor.a, max_out = 0.0f;
    float expected_alpha = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);
    texColor.a = expected_alpha;
}

if(u_algo == 1 || u_algo == 2)     // blue ticks & yellow highlight
{
    if(u_algo == 2)
    {
        vec2 txCoord = TxCoord - 0.5f;
        float angle = radians(-endAngle);
        mat2 rotation = mat2(cos(angle), -sin(angle), sin(angle), cos(angle));
        txCoord = rotation * txCoord;
        txCoord += 0.5f;
        texColor = texture(u_Texture, txCoord);
    }
    color = texColor;
    float min_in = 0.0f, max_in = 1.0f;    // input range
    float min_out = -1.0f, max_out = 1.0f;     // output range
    float tex_x_mapped = linearInterpolation(min_in, max_in, min_out, max_out, TxCoord.x);
    float tex_y_mapped = linearInterpolation(min_in, max_in, min_out, max_out, TxCoord.y);

    vec2 tex_mapped = vec2(tex_x_mapped, tex_y_mapped);
    float len_tex_vec = length(tex_mapped);
    float cosAng = dot(normalize(tex_mapped), normalize(refVec));

    float angDeg = degrees(acos(cosAng));
    if(angDeg < 180.0f && tex_y_mapped > 0.0f)    // it's in third quadrant
        angDeg = 360.0f - angDeg;

    // calc visible area
    if(angDeg < endAngle || angDeg > startAngle)
        discard;

    if(u_needleAngle < 0.714f)
    {
        // inner ticks visibility
        min_in = 0.0f, max_in = 0.414f;    // input range
        min_out = startAngle, max_out = endAngle;     // output range
        float expected_ang = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);
        if (angDeg < expected_ang && len_tex_vec < 0.6f)
            discard;

        float len_diff = 0.4f;
        min_in = 0.0f, max_in = 0.414f;
        min_out = 0.65f, max_out = min_out + len_diff;
        float start_len = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);
        min_in = 0.0f, max_in = 0.6f;
        min_out = 0.4f, max_out = min_out + len_diff;
        float end_len = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);

        min_in = startAngle;
        max_in = endAngle;
        min_out = start_len, max_out = end_len;
        float expected_len_tex_vec = linearInterpolation(min_in, max_in, min_out, max_out, angDeg);
        if(len_tex_vec > expected_len_tex_vec)
            discard;
    }
    else if(u_needleAngle > 0.714f)
    {
        min_in = 0.714f, max_in = 1.0f;
        min_out = 1.0f, max_out = 0.4f;
        float tex_len = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);
        if(len_tex_vec > tex_len)
            discard;
    }
}
if(u_algo == 3)     // Needle tip
{
    float factor = 0.42f;
    if(u_needleAngle < factor)
        discard;

    vec2 txCoord = TxCoord - 0.5f;
    float angle = radians(91.0f - endAngle);
    mat2 rotation = mat2(cos(angle), -sin(angle), sin(angle), cos(angle));
    txCoord = rotation * txCoord;
    txCoord += 0.5f;
    texColor = texture(u_Texture, txCoord);
    color = texColor;

    if(u_needleAngle < 0.714f)
    {
        float min_in = factor, max_in = 0.512f;    // input range
        float min_out = 0.5f, max_out = 0.0f;     // output range
        float expected_tex_y = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);
        if(txCoord.y < expected_tex_y)
            discard;
    }
    else if(u_needleAngle > 0.714f)
    {
        float min_in = 0.714f, max_in = 2.0f;
        float min_out = 0.0f, max_out = 1.0f;
        float expected_tex_y = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);
        if(txCoord.y < expected_tex_y)
            discard;
    }
}
if(u_algo == 4)     // Outer white glow
{
    if(u_needleAngle < 0.512f || u_needleAngle >  0.714f)
        discard;

    float min_in = 0.512f, max_in =  0.714f;
    float min_out = startAngle, max_out = endAngle;
    float rotationAngle = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);

    vec2 txCoord = TxCoord - 0.5f;
    float angle = radians(-rotationAngle);
    mat2 rotation = mat2(cos(angle), -sin(angle), sin(angle), cos(angle));
    txCoord = rotation * txCoord;
    txCoord += 0.5f;
    color = texture(u_Texture, txCoord);

    min_in = 0.0f, max_in = 1.0f;
    min_out = -1.0f, max_out = 1.0f;
    float tex_x_mapped = linearInterpolation(min_in, max_in, min_out, max_out, TxCoord.x);
    float tex_y_mapped = linearInterpolation(min_in, max_in, min_out, max_out, TxCoord.y);

    vec2 tex_mapped = vec2(tex_x_mapped, tex_y_mapped);
    float cosAng = dot(normalize(tex_mapped), normalize(refVec));

    float angDeg = degrees(acos(cosAng));
    if(angDeg < 180.0f && tex_y_mapped > 0.0f)
        angDeg = 360.0f - angDeg;

    // calc visible area
    if(angDeg < endAngle || angDeg > startAngle || angDeg < rotationAngle)
        discard;
}
}
