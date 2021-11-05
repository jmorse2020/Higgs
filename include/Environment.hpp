#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#include <vector>

#include "Player.hpp"
#include "Body.hpp"

class Environment
{
public:
    Environment();
    ~Environment();
    
    void Update(float l_dt);
    void CreateBody(sf::Vector2f l_pos, int mass);


    std::vector<Body>* GetBodies();
    Player* GetPlayer();

private:
    Player m_player;
    std::vector<Body> m_bodies;

};

#endif