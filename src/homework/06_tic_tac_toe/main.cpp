#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToe game;
	string first_player;
	char user_choice = 'y';
	TicTacToeManager manager;
	int x_win = 0; int o_win = 0; int ties = 0;
	do
	{
		
		while(!(first_player == "X" || first_player == "O")){
		cout<<"Enter first player(X or O): ";
		cin>>first_player;
		}
		game.start_game(first_player);

		int position;

		while(!game.game_over())
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}
		cout<<"Winner is: "<<game.get_winner()<<"\n";
		manager.save_game(game);
		
		cout<<"Play again? enter y or Y.";
		cin>>user_choice;



	} while(user_choice == 'y' || user_choice == 'Y');
	cout << manager;
	return 0;
}