#include <iostream>
#include <cstdlib>

#include "Vector2Test.hpp"
#include "Vector3Test.hpp"



int main()
{
    int result = UnitTest::RunAllTests();

	// to make life JUST that much more easier .. :)
	system("PAUSE");
	return result;
}
