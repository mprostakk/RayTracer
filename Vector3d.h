#pragma once

#include <string>
#include <math.h>

class Vector3D {
private:
	double x;
	double y;
	double z;
public:
	Vector3D();
	Vector3D(double x_, double y_, double z_);
	double getX() const;
	double getY() const;
	double getZ() const;
	Vector3D operator-() const; // negation
	Vector3D operator+(const Vector3D &vec); // adding 
	Vector3D operator-(const Vector3D &vec); // subtracting
	double magnitude_pow(); // length pow
	double magnitude(); // length
	Vector3D normalize(); // normalize
	Vector3D operator*(double scalar); // scalar
	double operator*(const Vector3D &vec); // dot
	double dot(const Vector3D &vec); // dot #2
	Vector3D cross(const Vector3D &vec); // cross

	static Vector3D cross_product(const Vector3D &vec1, const Vector3D &vec2);

	std::string show();

	//typedef Vector3D V3D;
};

typedef Vector3D V3D;