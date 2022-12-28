#version 330 core

layout (location = 0) in vec3 Position;
layout (location = 1) in vec3 inColor;

uniform mat4 gRotation;

out vec4 Color;

// RGBA
//const vec4 colors[3] = vec4[3]( vec4(1, 0, 0, 1),
//                                vec4(0, 1, 0, 1),
//                                vec4(0, 0, 1, 1));

void main()
{
    gl_Position = gRotation * vec4(Position, 1.0);
    Color = vec4(inColor, 1.0);
}