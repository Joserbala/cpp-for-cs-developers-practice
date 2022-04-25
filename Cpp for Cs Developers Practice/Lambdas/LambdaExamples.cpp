#include <iostream>

void Foo()
{
	// Instantiate the lambda class.
	auto lc = [](int x, int y) { return x + y; };

	// Invoke the overloaded function call operator
	std::cout << lc(200, 300) << '\n'; // 500

	// Invoke the user-defined conversion operator to get a function pointer
	int (*p)(int, int) = lc;
	std::cout << p(20, 30) << '\n'; // 50

	// Call the copy constructor
	auto lc2{ lc };
	std::cout << lc2(2, 3) << '\n'; // 5

	// Destructor of lc and lc2 called here
}
