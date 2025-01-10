#type vertex

layout(location = 0) in vec3 a_Position;
layout(location = 1) in vec2 a_TexCoord;
layout(location = 2) in vec3 a_Color;

uniform mat4 u_ViewProjectionMatrix;
uniform mat4 u_Transform;
uniform float u_swapScale;
uniform int u_algo;

out vec2 TxCoord;
out vec3 VertexColor;

float linearInterpolation(float min_in, float max_in, float min_out, float max_out, float in_val)
{
    float out_val = min_out + (max_out - min_out) * ((in_val - min_in) / (max_in - min_in));
    return out_val;
}

void main()
{
    TxCoord = a_TexCoord;

    vec4 scaledPos = vec4(a_Position, 1.0f);
    float min_in = 0.0f, max_in = 1.0f;
    float min_out = 1.0f, max_out = 1.0f;
    if(u_algo == 1)
    {
        min_out = 0.0f;
        max_out = 1.0f;
    }
    if(u_algo == 2)
    {
        min_out = 1.0f;
        max_out = 0.0f;
    }
    float scale = linearInterpolation(min_in, max_in, min_out, max_out, u_swapScale);
    vec3 scaleVec = vec3(scale, scale, 1.0f);
    scaledPos = vec4(a_Position * scaleVec, 1.0f);

    gl_Position = u_ViewProjectionMatrix * u_Transform * scaledPos;
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

void main()
{
vec4 texColor = texture(u_Texture, TxCoord);
if(texColor.a < 0.1f)
    discard;

color = texColor;
}
