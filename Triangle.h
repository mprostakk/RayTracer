#pragma once
#include "Ray.h"
#include "Vector3d.h"

class Triangle
{
public:
	Vector3D vertices[3]{};
	Vector3D normal[3]{};

	bool Intersect(const Ray &ray, Vector3D *point, double distance) const;
	Vector3D GetNormal(const Vector3D &point) const;
};