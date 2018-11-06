#include "pch.h"
#include "test.h"
#include <iostream>

Test::Test() 
{
	a = 1;
}

Test::Test(int a_) : a(a_) 
{
	
}

void Test::print() 
{
	std::cout << "test: " << a << std::endl;
}