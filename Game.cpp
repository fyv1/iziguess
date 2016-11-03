#include "Game.h"
#include "Player.h"
#include "Cpu.h"

using namespace std;

Game::Game()
{
    Player p();
    Cpu c();

    srand(time(NULL));
    state = GAME;
}

Game::~Game()
{
}

void Game::runGame
{
    while( state != END)
    {
        switch(state)
    case GameState::GAME:
        game(Player, Cpu);
        break;
    }
}

void Game::game(Player answer, Cpu random)
{
	int i=0;
	while(p.answer != c.random)
	{
		cout << "Zgadnij liczbe: "; cin >> p.answer; i++;
		if(p.answer < c.random) cout << "Liczba za mala" << endl;
		if(p.answer > c.random) cout << "Liczba za duza" << endl;
	}
	cout << "Wynik odgadniety za " << i << " razem" << endl;

	system("PAUSE");
}


