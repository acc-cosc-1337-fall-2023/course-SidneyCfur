#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string; using std::unique_ptr; using std::make_unique;

int main() 
{
	unique_ptr<TicTacToe> game = nullptr;
	string first_player;
	char user_choice = 'y';
	TicTacToeManager manager;
	int x_win = 0; int o_win = 0; int ties = 0;
	cout<<"which board you wish to play with \n(1) 3x3 \n (2) 4x4?\n\n";
	string option;
	cin>> option;
	if(option == "2")
	{
		game = make_unique<TicTacToe4>();
	}
	else
	{
		game = make_unique<TicTacToe3>();
	}

	do
	{
		
		while(!(first_player == "X" || first_player == "O")){
		cout<<"Enter first player(X or O): ";
		cin>>first_player;
		}
		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;

			game->mark_board(position);
			cout<<*game;
		}
		cout<<"Dog";
		manager.save_game(game);
		cout<<"Winner is: "<<game->get_winner()<<"\n";


		manager.get_winner_total(o_win, x_win, ties);

		cout<<"O wins: "<<o_win<<"\n"<<"X wins: "<<x_win<<"\n"<<"TIES: "<<ties<<"\n";
		cout<<"enter Y or y to play again.\n\n";

		cin>>user_choice;



	} while(user_choice == 'y' || user_choice == 'Y');
	cout << manager;
	return 0;
}