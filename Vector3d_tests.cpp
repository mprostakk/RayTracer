#include <iostream>
#include "Vector3d.h"

using namespace std;

int main()
{
	V3D my_vec = V3D(2.0, 3.0, 4.0);
	V3D my_second_vec = V3D(5.0, 6.0, 7.0);
	V3D cross, neg, add, sub, normalize, scalar, cross_product;
	cross = my_vec.cross(my_second_vec);
	cross_product = V3D::cross_product(my_vec, my_second_vec);
	neg = -my_vec;
	add = my_vec + my_second_vec;
	sub = my_vec - my_second_vec;
	normalize = my_vec.normalize();
	scalar = my_vec * 1.5;
	double dot = my_vec.dot(my_second_vec);
	double magnitude = my_vec.magnitude();
	double magnitude_pow = my_vec.magnitude_pow();

	cout << "Vector1: " << my_vec.show() << endl;
	cout << "Vector2: " << my_second_vec.show() << endl;
	cout << "v1 neg: " << neg.show() << endl;
	cout << "v1 magn: " << magnitude << endl;
	cout << "v1 magn pow: " << magnitude_pow << endl;
	cout << "v1 v2 dot: " << dot << endl;
	cout << "v1 scalar 1.5: " << scalar.show() << endl;
	cout << "v1 normalize: " << normalize.show() << endl;
	cout << "v1 normalize length: " << normalize.magnitude() << endl;
	cout << "v1 add: " << add.show() << endl;
	cout << "v1 sub: " << sub.show() << endl;
	cout << "v1 v2 cross: " << cross.show() << endl;
	cout << "v1 v2 cross_product: " << cross_product.show() << endl;
}