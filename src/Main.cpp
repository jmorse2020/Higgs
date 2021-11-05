#include "Game.hpp"

int main()
{
    Game game( {2000, 1600} );
    while (!game.IsDone())
    {
        game.DrawScene();
        // game.Update();
        game.ProcessInput();
        // game.RestartClock();
    }
    return 0;
}