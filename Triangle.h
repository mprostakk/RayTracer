#pragma once
#include "Ray.h"
#include "Vector3d.h"

class Triangle
{
public:
	V3D vertex[3]{};
	V3D normal[3]{};

	bool Intersect(const Ray &ray, V3D *point, double distance) const;
	V3D GetNormal(const V3D &point) const;
};