#include "Game.hpp"

Game::Game(sf::Vector2u l_winSize) : m_done { false }
{
    m_window.create( { l_winSize.x, l_winSize.y }, "Higgs");
}

Game::~Game()
{

}

void Game::Reset()
{

}

void Game::DrawScene()
{
    m_window.clear(sf::Color::Black);

    // Draw Scene Entities

    m_window.display();
}

void Game::Update()
{

}

void Game::ProcessInput()
{
    sf::Event ev;
    while (m_window.pollEvent(ev))
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