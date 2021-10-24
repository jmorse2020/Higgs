#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>

class Game
{
public:
    Game(sf::Vector2u l_winSize);
    ~Game();

    void Reset();

    void DrawScene();
    void Update();
    void ProcessInput();
    void RestartClock();

    bool IsDone();

private:
    bool m_done;
    sf::RenderWindow m_window;
};

#endif