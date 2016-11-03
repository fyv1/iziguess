#include <iostream>
#include <windows.h>
#include "Player.h"
#include "Cpu.h"

using namespace std;

class Game
{
public:
    void runGame();

    Game();
    ~Game();

protected:
    enum GameState {GAME, END};
    GameState state;

private:
    void game(Player, Cpu);
};



