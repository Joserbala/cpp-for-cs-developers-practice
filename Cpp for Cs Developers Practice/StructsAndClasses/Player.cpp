#include "Player.hpp"

std::int32_t Player::HighScore = 0;

Player::Player() = default;

Player::Player(int score) : Score{ score } {};

std::int32_t Player::GetScore() const {
	return Score;
}
