#include "Player.hpp"

Player::Player() : m_radius(50.0f)
{
    m_position = {(float)constants::k_winSize.x / 2.0f, (float)constants::k_winSize.y / 2.0f};
}

Player::~Player()
{

}

void Player::Move()
{

}

sf::Vector2f Player::GetPos()
{
    return m_position;
}

float Player::GetRadius()
{
    return m_radius;
}