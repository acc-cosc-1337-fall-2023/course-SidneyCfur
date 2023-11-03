#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	}

TEST_CASE("Test the vertical victory 1"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
		game->start_game("X");

	game->mark_board(1);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the vertical victory 2"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
		game->start_game("X");

	game->mark_board(2);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the vertical victory 3"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(3);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the horizontal victory 1"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	
	game->start_game("X");

	game->mark_board(1);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the horizontal victory 2"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	
	game->start_game("X");

	game->mark_board(4);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the horizontal victory 3"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	
	game->start_game("X");

	game->mark_board(7);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test the diagonal victory 1"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	
	game->start_game("X");

	game->mark_board(7);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test the diagonal victory 2"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	
	game->start_game("O");

	game->mark_board(1);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner()=="O");

}



TEST_CASE("test get total winner")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	TicTacToeManager manager;
	int x_win = 0; int o_win = 0; int ties = 0;
	game->start_game("X");

	game->mark_board(7);
	game->mark_board(4);
	game->mark_board(5);
	game->mark_board(2);
	game->mark_board(3);
	game->game_over();
	manager.save_game(game);
	
	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe3>();
	
	game1->start_game("X");

	game1->mark_board(7);
	game1->mark_board(1);
	game1->mark_board(8);
	game1->mark_board(2);
	game1->mark_board(4);
	game1->mark_board(3);
	game1->game_over();
	REQUIRE(game1->get_winner()=="O");
	manager.save_game(game1);


	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe3>();

	game2->start_game("X");

	game2->mark_board(1);
	game2->mark_board(2);
	game2->mark_board(3);
	game2->mark_board(4);
	game2->mark_board(5);
	game2->mark_board(7);
	game2->mark_board(6);
	game2->mark_board(9);
	game2->mark_board(8);
	game2->game_over();
	manager.save_game(game2);

	

	manager.get_winner_total(o_win, x_win, ties);
	REQUIRE(ties == 1);
	REQUIRE(x_win == 1);
	REQUIRE(o_win == 1);
	
	
}

TEST_CASE("Test if the board is full 4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(10);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	game->mark_board(15);
	game->mark_board(11);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	game->mark_board(2);
	game->mark_board(16);
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	game->mark_board(7);
	game->mark_board(8);
	game->mark_board(12);
	cout<<*game;
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	}

TEST_CASE("Test the vertical victory 1 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
		game->start_game("X");

	game->mark_board(1);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	game->mark_board(10);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the vertical victory 2 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
		game->start_game("X");

	game->mark_board(2);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	game->mark_board(11);
	game->mark_board(14);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the vertical victory 3 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
		game->start_game("X");

	game->mark_board(3);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	game->mark_board(12);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the vertical victory 4 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
		game->start_game("X");

	game->mark_board(4);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	game->mark_board(13);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test the horizontal victory 1 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	
	game->start_game("X");

	game->mark_board(1);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	game->mark_board(7);
	game->mark_board(4);
	// game->display_board();
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the horizontal victory 2 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	
	game->start_game("X");

	game->mark_board(5);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	game->mark_board(3);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the horizontal victory 3 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	
	game->start_game("X");

	game->mark_board(9);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	game->mark_board(3);
	game->mark_board(12);
	REQUIRE(game->game_over() == true);

}
TEST_CASE("Test the horizontal victory 4 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	
	game->start_game("X");

	game->mark_board(13);
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	game->mark_board(3);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);

}


TEST_CASE("Test the diagonal victory 1 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	
	game->start_game("X");

	game->mark_board(1);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	game->mark_board(12);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test the diagonal victory 2 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	
	game->start_game("X");

	game->mark_board(4);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	game->mark_board(12);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);

}




