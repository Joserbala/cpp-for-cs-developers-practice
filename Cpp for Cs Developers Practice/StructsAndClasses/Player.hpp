#pragma once

#include <cstdint>

struct Player
{
	std::int32_t Score;
	static std::int32_t HighScore;
	const static std::int32_t MaxHealth = 100;
};

int32_t Player::HighScore = 0;
