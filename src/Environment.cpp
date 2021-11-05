#include "Environment.hpp"

Environment::Environment() : m_player{}
{
    // CreateBody({100, 100}, 400);
}

Environment::~Environment()
{
    
}

void Environment::Update(float l_dt)
{
    // Update player
}

Player* Environment::GetPlayer()
{
    return &m_player;
}

std::vector<Body>* Environment::GetBodies()
{
    return &m_bodies;
}