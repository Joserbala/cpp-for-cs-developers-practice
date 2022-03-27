#include <iostream>

void ArraysExample()
{
	int a[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// Implicitly convert to a pointer to an array of 3 int
	// Read the type name as "p is a pointer to an array of 3 int elements"
	int (*p)[3] = a;

	// Dereference that pointer to get a pointer to the first element
	int const* pp = *p;

	for (int i = 0; i < 6; ++i)
	{
		std::cout << pp[i] << '\n'; // 1, 2, 3, 4, 5, 6
	}
}
