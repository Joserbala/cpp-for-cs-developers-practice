#pragma once

#include <cstdint>

struct Player
{
	std::int32_t Score{ 0 };
	static std::int32_t HighScore;
	const static std::int32_t MaxHealth = 100;

	Player();

	explicit Player(int score);
};
