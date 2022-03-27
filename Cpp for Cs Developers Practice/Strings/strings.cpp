#include <iostream>

void StringsExample()
{
	// The string literal "hello" has type const char[6]
	// Its contents are the characters 'h', 'e', 'l', 'l', 'o', 0
	const char hello[] = "hello";

	// Like any other array, it's implicitly converted a pointer
	const char* p = hello;
	for (int i = 0; i < 6; ++i)
	{
		std::cout << p[i]; // h, e, l, l, o, <NUL>
	}
}
