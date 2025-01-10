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

void main()
{
    vec4 texColor = texture(u_Texture, TxCoord);
    if(texColor.a < 0.1f)
        discard;

    color = texColor;
}
