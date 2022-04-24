#include "StructsAndClasses/Player.hpp"
#include <memory>
#include <iostream>

int GetPlayerScore(Player const& player) {
	return player.Score;
}

int main()
{
	std::unique_ptr<Player> pPlayer{ std::make_unique<Player>(8) };

	std::cout << GetPlayerScore(*pPlayer) << '\n';

	return 0;
}
