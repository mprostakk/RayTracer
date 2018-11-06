#include "pch.h"
#include "Vector3d.h"
//#include <string>

Vector3D::Vector3D() 
	: x(0.0)
	, y(0.0)
	, z(0.0) 
{}

Vector3D::Vector3D(double x_, double y_, double z_) 
	: x(x_)
	, y(y_)
	, z(z_) 
{}

double Vector3D::getX() const { return x; }

double Vector3D::getY() const { return y; }

double Vector3D::getZ() const { return z; }

Vector3D Vector3D::operator-() const
{
	return Vector3D(-x, -y, -z);
}

Vector3D Vector3D::operator+(const Vector3D &vec)
{
	return Vector3D(x + vec.getX(), y + vec.getY(), z + vec.getZ());
}

Vector3D Vector3D::operator-(const Vector3D &vec)
{
	//return Vector3D(x - vec.getX(), y - vec.getY(), z - vec.getZ());
	return(*this + -vec);
}

Vector3D Vector3D::operator*(double scalar)
{
	return Vector3D(x * scalar, y * scalar, z * scalar);
}

double Vector3D::magnitude_pow()
{
	return (x * x + y * y + z * z);
}

double Vector3D::magnitude()
{
	return std::sqrt(Vector3D::magnitude_pow());
}

Vector3D Vector3D::normalize()
{
	// TODO catch div by 0
	double length = magnitude();
	return Vector3D(x / length, y / length, z / length);
}

double Vector3D::operator*(const Vector3D &vec)
{
	return(x*vec.getX() + y * vec.getY(), z*vec.getZ());
}

double Vector3D::dot(const Vector3D &vec)
{
	return(x*vec.getX() + y * vec.getY(), z*vec.getZ());
}

Vector3D Vector3D::cross(const Vector3D &vec)
{
	return Vector3D(y*vec.getZ() - z * vec.getY(), z*vec.getX() - x * vec.getZ(), x*vec.getY() - y * vec.getX());
}

 Vector3D Vector3D::cross_product(const Vector3D &vec1, const Vector3D &vec2)
{
	 return Vector3D(vec1.y*vec2.getZ() - vec1.z * vec2.getY(), vec1.z*vec2.getX() - vec1.x * vec2.getZ(), vec1.x*vec2.getY() - vec1.y * vec2.getX());
}


std::string Vector3D::show()
{
	return ("["  + std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(z) + "]");
}