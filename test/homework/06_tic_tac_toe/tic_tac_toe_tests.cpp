#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

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
	
	game.start_game("X");

	game.mark_board(1);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	game.display_board();
	REQUIRE(game.game_over() == true);

}