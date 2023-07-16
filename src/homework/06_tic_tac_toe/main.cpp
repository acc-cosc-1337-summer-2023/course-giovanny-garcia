#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <string>
#include<memory>
using std::cout; using std::cin; using std::string;
using std::unique_ptr; using std::make_unique;

int main() 
{
	unique_ptr<TicTacToe> game; //save memory region for a game
	string first_player;
	char user_choice;

	do
	{
		auto game_type = 0;

		cout<<"Enter game type(3 or 4): ";
		cin>>game_type;

		if(game_type == 3)
		{
			game = make_unique<TicTacToe3>();
		}
		else{
			game = make_unique<TicTacToe4>();
		}

		while(!(first_player == "X" || first_player == "O"))
		{
			cout<<"Enter first player: ";
			cin>>first_player;
		}

		game->start_game(first_player);

		while(game->game_over() == false)
		{
			cin>>*game;
			cout<<*game;
		}
		cout<<"Play again, enter y or Y? ";
		cin >> user_choice;

	} while (user_choice == 'y' || user_choice == 'Y');
	
	return 0;
}