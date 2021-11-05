#ifndef RENDERER_HPP
#define RENDERER_HPP

#include "Environment.hpp"

#include <SFML/Graphics.hpp>

#include <random>
#include <vector>
#include <string>

class Renderer
{
public:
    Renderer(Environment *l_env, sf::Vector2u l_winSize, const std::string &l_title, sf::Color l_bgCol = {57, 57, 57}, int l_framerateLimit = 60);
    ~Renderer();

    void DrawScene();
    sf::RenderWindow* GetWindow();

private:
    void DrawPlayer();
    void DrawBodies();
    void DrawOverlay();
    void DrawUI();

    sf::RenderWindow m_window;
    sf::Color m_bgColour;
    Environment *m_env;
};

#endif