#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <cstdio>

using namespace std;
void game(short int player_ans, short int cpu_int);

int main()
{
	
	short int player_ans, cpu_int;	
	srand(time(NULL));

	
	cpu_int = (rand() % 100) + 1;
	
	cout << "EZ GUESS" << endl;
	cout << "liczby od 1 do 100" << endl;

	game(player_ans, cpu_int);
	
	system("PAUSE");
	
	return EXIT_SUCCESS;
}

void game(short int player_ans, short int cpu_int)
{
	int i=0;
	while(player_ans != cpu_int)
	{	
		cout << "Zgadnij liczbe: "; cin >> player_ans; i++;
		if(player_ans < cpu_int) cout << "Liczba za mala" << endl;
		if(player_ans > cpu_int) cout << "Liczba za duza" << endl;
	}
	cout << "Wynik odgadniony za " << i << " razem" << endl;
}
