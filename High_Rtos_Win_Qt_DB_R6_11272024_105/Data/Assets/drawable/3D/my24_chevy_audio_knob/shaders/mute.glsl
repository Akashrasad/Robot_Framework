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
uniform int u_mute;
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
if(u_needleAngle < 0.01f)
    discard;
float startAngle = u_startAngle;
if(startAngle > 270.0f || startAngle == 0.0f) startAngle = 270.0f;
float endAngle = u_endAngle;
vec4 texColor = texture(u_Texture, TxCoord);

if(u_algo == 1 || u_algo == 2)     // blue ticks & Yellow Highlight
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

    if(u_mute == 0)
    {
        float len_diff = 0.7f;
        min_in = 1.0f, max_in = 0.0f;
        min_out = 0.1f, max_out = min_out + len_diff;
        float tex_len = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);

        min_in = startAngle;
        max_in = endAngle;
        min_out = tex_len, max_out = tex_len;
        float expected_len_tex_vec = linearInterpolation(min_in, max_in, min_out, max_out, angDeg);
        if(len_tex_vec > expected_len_tex_vec && len_tex_vec > 0.7f)
            discard;
    }
    else if(u_mute == 1)            // unmute
    {
        float len_diff = 0.4f;
        min_in = 0.0f, max_in = 1.0f;
        min_out = 0.7f, max_out = min_out + len_diff;
        float tex_len = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);

        min_in = startAngle;
        max_in = endAngle;
        min_out = tex_len, max_out = tex_len;
        float expected_len_tex_vec = linearInterpolation(min_in, max_in, min_out, max_out, angDeg);
        if(len_tex_vec > expected_len_tex_vec)
            discard;
    }
}
if(u_algo == 3)     // Needle tip
{
    vec2 txCoord = TxCoord - 0.5f;
    float angle = radians(91.0f - endAngle);
    mat2 rotation = mat2(cos(angle), -sin(angle), sin(angle), cos(angle));
    txCoord = rotation * txCoord;
    txCoord += 0.5f;
    color = texture(u_Texture, txCoord);

    float min_in = 0.0f, max_in = 1.0f;
    float min_out, max_out;
    if(u_mute == 0)
    {
        min_out = 0.0f;
        max_out = 1.0f;
    }
    else if(u_mute == 1)            // unmute
    {
        min_out = 0.2f;
        max_out = -0.2f;
    }
    float expected_tex_y = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);
    if(txCoord.y < expected_tex_y && txCoord.y < 0.18f)
        discard;
}
if(u_algo == 4)     // Outer glow
{
    float scale = sin(u_needleAngle) * 1.0f - 1.5f;
    vec2 texCoordCentered = TxCoord - 0.5f;
    texCoordCentered *= vec2(scale);
    texCoordCentered += 0.5f;
    vec4 texColor = texture(u_Texture, texCoordCentered);

    color =  texColor;
    float min_in = 0.2f, max_in = 0.7f;
    float min_out = texColor.a, max_out = 0.0f;
    float expected_alpha = linearInterpolation(min_in, max_in, min_out, max_out, u_needleAngle);
    color.a = expected_alpha;
}
}
