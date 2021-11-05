#ifndef BODY_HPP
#define BODY_HPP

#include <random>

#include <SFML/Graphics.hpp>

class Body
{
public:
    Body(float l_mass, float l_radius, sf::Vector2f l_pos);
    Body(float l_mass, float l_radius);
    ~Body();

    sf::Vector2f GetPos() const;
    float GetRadius() const;
    float GetMass() const;

private:
    sf::Vector2f m_pos;
    float m_radius;
    float m_mass;
};

#endif