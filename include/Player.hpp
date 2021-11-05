#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML/Graphics.hpp>

class Player
{
public:
    Player();
    ~Player();

    void Draw(sf::RenderWindow *l_wind);
    void Move();

private:
    sf::Vector2f m_position;

    int m_score;
    int m_size;
    int m_velocity;

    sf::CircleShape m_shape;

};

#endif