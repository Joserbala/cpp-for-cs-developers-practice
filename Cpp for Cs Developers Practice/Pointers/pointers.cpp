#include <iostream>

void PointersMultipleLevelsOfIndirection() {
	int x = 123;
	int* p = &x; // 0x000000f187aff564 {123}
	int** pp = &p; // 0x000000f187aff588 {0x000000f187aff564 {123}}

	std::cout << **pp << '\n'; // 123

	**pp = 456; // 0x000000f187aff588 {0x000000f187aff564 {456}}
	std::cout << x << '\n'; // 456

	int y = 1000;
	*pp = &y; // 0x000000f187aff588 {0x00000080c0bdf894 {1000}} -> p points to the y position (because *pp contains &p) 
	**pp = 2000;
	std::cout << x << '\n'; // 456
	std::cout << y << '\n'; // 2000
}
