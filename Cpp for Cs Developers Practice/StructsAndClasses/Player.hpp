#pragma once

#include <cstdint>

struct Player
{
	std::int32_t Score{ 0 };
	inline static std::int32_t HighScore = 0;
	const static std::int32_t MaxHealth = 100;

	Player();

	explicit Player(int score);
};
