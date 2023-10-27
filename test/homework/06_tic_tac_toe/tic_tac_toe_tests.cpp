#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full")
{
	TicTacToe game;


	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
	}

TEST_CASE("Test the vertical victory 1"){
	TicTacToe game;
		game.start_game("X");

	game.mark_board(1);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);

}
TEST_CASE("Test the vertical victory 2"){
	TicTacToe game;
		game.start_game("X");

	game.mark_board(2);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

}
TEST_CASE("Test the vertical victory 3"){
	TicTacToe game;
		game.start_game("X");

	game.mark_board(3);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}
TEST_CASE("Test the horizontal victory 1"){
	TicTacToe game;
	
	game.start_game("X");

	game.mark_board(1);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	game.display_board();
	REQUIRE(game.game_over() == true);

}
TEST_CASE("Test the horizontal victory 2"){
	TicTacToe game;
	
	game.start_game("X");

	game.mark_board(4);
	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	game.display_board();
	REQUIRE(game.game_over() == true);

}
TEST_CASE("Test the horizontal victory 3"){
	TicTacToe game;
	
	game.start_game("X");

	game.mark_board(7);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	game.display_board();
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test the diagonal victory 1"){
	TicTacToe game;
	
	game.start_game("X");

	game.mark_board(7);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	game.display_board();
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test the diagonal victory 2"){
	TicTacToe game;
	
	game.start_game("O");

	game.mark_board(1);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	game.display_board();
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner()=="O");

}



TEST_CASE("test get total winner")
{
	TicTacToe game;
	TicTacToeManager manager;
	int x_win = 0; int o_win = 0; int ties = 0;
	game.start_game("X");

	game.mark_board(7);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(3);
	game.game_over();
	manager.save_game(game);
	
	TicTacToe game1;
	
	game1.start_game("X");

	game1.mark_board(7);
	game1.mark_board(1);
	game1.mark_board(8);
	game1.mark_board(2);
	game1.mark_board(4);
	game1.mark_board(3);
	game1.display_board();
	game1.game_over();
	REQUIRE(game1.get_winner()=="O");
	manager.save_game(game1);


	TicTacToe game2;

	game2.start_game("X");

	game2.mark_board(1);
	game2.mark_board(2);
	game2.mark_board(3);
	game2.mark_board(4);
	game2.mark_board(5);
	game2.mark_board(7);
	game2.mark_board(6);
	game2.mark_board(9);
	game2.mark_board(8);
	game2.display_board();
	game2.game_over();
	manager.save_game(game2);

	

	manager.get_winner_total(o_win, x_win, ties);
	REQUIRE(ties == 1);
	REQUIRE(x_win == 1);
	REQUIRE(o_win == 1);
	
	
}