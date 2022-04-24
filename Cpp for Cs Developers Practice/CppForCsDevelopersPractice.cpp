#include "StructsAndClasses/Player.hpp"
#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<Player> pPlayer{ std::make_unique<Player>(8) };

	std::cout << pPlayer->Score << '\n';

	return 0;
}
