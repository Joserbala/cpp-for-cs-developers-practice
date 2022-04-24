#pragma once

#include <cstdint>

class Player
{
	std::int32_t Score{ 0 };

public:
	static std::int32_t HighScore;
	const static std::int32_t MaxHealth = 100;

	Player();

	explicit Player(int score);

	std::int32_t GetScore() const;
};
