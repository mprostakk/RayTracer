#include "pch.h"
#include "Vector3d.h"
#include "Ray.h"
#include "Triangle.h"
#include <vector>
//#include <iostream>

#define M_PI 3.141592653589793 
#define INFINITY 1e8 

void render(const std::vector<Triangle> &triangles)
{
	const int image_height = 640, image_width = 480;
	
	V3D *image = new V3D[image_width * image_height], *pixel = image;
	double inv_width = 1 / double(image_width), inv_height = 1 / double(image_height); // ?
	
	/*
	float fov = 30, aspectratio = width / float(height); 
    float angle = tan(M_PI * 0.5 * fov / 180.); 
	*/

	for (int j = 0; j < image_height; ++j)
	{
		for (int i = 0; i < image_width; ++i, ++pixel)
		{
			Ray prim_ray;
			Ray::compute_prim_ray(i, j, prim_ray);

			//Point p_hit; // ?
			//Normal n_hit; // ?

			double min_distance = INFINITY;
			Triangle object = NULL; // change to triangle

			for (int k = 0; k < triangles.size(); ++k)
			{
				if (Triangle::Intersect(triangles[k], prim_ray, p_hit, n_hit))
				{
					double distance = distance(eye_position, p_hit);
					if (distance < min_distance)
					{
						object = triangles[k];
						min_distance = distance;
					}
				}
			}

			if (object != NULL)
			{
				// compute illumanation
				// for now, just using cos
			}
		}
	}
}

int main()
{
	std::vector<Triangle> triangles;
}
