#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Constants.hpp"

#include <SFML/Graphics.hpp>

class Player
{
public:
    Player();
    ~Player();

    void Move();

    sf::Vector2f GetPos();
    float GetRadius();

private:
    sf::Vector2f m_position;

    int m_score;
    float m_radius;
    int m_velocity;
};

#endif