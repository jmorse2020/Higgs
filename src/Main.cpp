#include "Game.hpp"
#include "Constants.hpp"

int main()
{
    Game game(constants::k_winSize);
    while (!game.IsDone())
    {
        game.DrawScene();
        // game.Update();
        game.ProcessInput();
        // game.RestartClock();
    }
    return 0;
}