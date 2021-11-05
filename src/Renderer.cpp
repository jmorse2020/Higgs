#include "Renderer.hpp"

Renderer::Renderer(Environment *l_env, sf::Vector2u l_winSize, const std::string &l_title, sf::Color l_bgCol, int l_framerateLimit)
    : m_env{l_env}, m_bgColour{l_bgCol}
{
    m_window.create({l_winSize.x, l_winSize.y}, l_title);
    m_window.setFramerateLimit(l_framerateLimit);
}

Renderer::~Renderer() {}

void Renderer::DrawScene()
{
    m_window.clear(m_bgColour);

    DrawPlayer();
    DrawBodies();
    DrawOverlay();
    DrawUI();

    m_window.display();
}

void Renderer::DrawPlayer()
{
    Player *player = m_env->GetPlayer();
    sf::CircleShape shape;
    shape.setFillColor(sf::Color::Red);
    shape.setRadius(player->GetRadius());
    sf::FloatRect rect = shape.getLocalBounds();
    shape.setOrigin(rect.width / 2.0f, rect.height / 2.0f);
    shape.setPosition(player->GetPos());
    m_window.draw(shape);
}

void Renderer::DrawBodies()
{
    auto l_bodies = m_env->GetBodies();
    sf::CircleShape shape;
    for (const auto &l_body : *l_bodies)
    {
        if (l_body.GetMass() > 0)
        {
            shape.setFillColor(sf::Color::Black);
        }
        else
        {
            shape.setFillColor(sf::Color::White);
        }
        sf::FloatRect rect = shape.getLocalBounds();
        shape.setOrigin(rect.width / 2.0f, rect.height / 2.0f);
        shape.setPosition(l_body.GetPos());
        shape.setRadius(l_body.GetRadius());
        m_window.draw(shape);
    }
}

void Renderer::DrawOverlay()
{
    // Draw overlay
}

void Renderer::DrawUI()
{

}

sf::RenderWindow* Renderer::GetWindow()
{
    return &m_window;
}