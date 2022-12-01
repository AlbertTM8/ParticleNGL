#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <ngl/Vec3.h>
struct Particle {
ngl::Vec3 position;
ngl::Vec3 direction={0.0f, 1.0f, 0.0f};
ngl::Vec3 colour;
float scale = 1.0f; 
int lifetime = 0;

};

#endif