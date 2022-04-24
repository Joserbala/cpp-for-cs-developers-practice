#include "StructsAndClasses/Player.hpp"
#include <memory>
#include <iostream>

std::int32_t GetPlayerScoreMultiplied(Player const& player, int multiplier) {
	return player.GetScore() * multiplier;
}

int main()
{
	std::unique_ptr<Player> pPlayer{ std::make_unique<Player>(8) };

	std::cout << GetPlayerScoreMultiplied(*pPlayer, 10) << '\n';

	return 0;
}
