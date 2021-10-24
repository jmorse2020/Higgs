#include "Game.hpp"

int main()
{
    Game game( {1200, 800} );
    while (!game.IsDone())
    {
        game.DrawScene();
    }
    return 0;
}