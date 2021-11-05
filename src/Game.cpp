#include "Game.hpp"

Game::Game(sf::Vector2u l_winSize) : m_done{false}, m_environment{}, m_renderer{&m_environment, l_winSize, "Higgs"}
{
}

Game::~Game()
{

}

void Game::Reset()
{

}

void Game::DrawScene()
{
    m_renderer.DrawScene();
}

void Game::Update()
{
    m_environment.Update(0.0f);
}

void Game::ProcessInput()
{
    sf::Event ev;
    while (m_renderer.GetWindow()->pollEvent(ev))
    {
        if (ev.type == sf::Event::Closed)
        {
            m_done = true;
        }
    }
}

void Game::RestartClock()
{

}

bool Game::IsDone()
{
    return m_done;
}