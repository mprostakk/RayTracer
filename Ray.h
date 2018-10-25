#pragma once
#include "Vector3d.h"

class Ray
{
public:
	V3D origin;
	V3D direction;

	Ray()
		: origin(0.0, 0.0, 0.0)
		, direction(0.0, 0.0, -1.0) 
	{}

	Ray(V3D org, V3D dir) 
		: origin(org)
		, direction(dir)
	{}

	static void compute_prim_ray(int i, int j, Ray &prim_ray)
	{}
};