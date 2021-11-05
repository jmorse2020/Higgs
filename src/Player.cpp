#include "Player.hpp"

Player::Player()
{
    m_shape.setFillColor(sf::Color::Red);
    m_shape.setRadius(100);
    m_shape.setOrigin(sf::Vector2f(m_shape.getRadius(), m_shape.getRadius()));
}