#include "Body.hpp"

Body::Body(float l_mass, float l_radius, sf::Vector2f l_pos)
    : m_mass{l_mass}, m_radius{l_radius}, m_pos{l_pos}
{

}

Body::Body(float l_mass, float l_radius)
    : m_mass{l_mass}, m_radius{l_radius}
{
    // Set position to random location within evironment bounds
    m_pos = {0, 0};
}

Body::~Body()
{
    
}

sf::Vector2f Body::GetPos() const
{
    return m_pos;
}

float Body::GetRadius() const
{
    return m_radius;
}

float Body::GetMass() const
{
    return m_mass;
}