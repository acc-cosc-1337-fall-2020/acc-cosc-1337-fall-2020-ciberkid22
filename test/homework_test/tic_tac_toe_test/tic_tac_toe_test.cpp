#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Determine if there is a tie")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);

	game->mark_board(2);

	game->mark_board(3);

	game->mark_board(4);
	
	game->mark_board(5);

	game->mark_board(7);

	game->mark_board(6);

	game->mark_board(9);

	game->mark_board(8);

	game->game_over();

	REQUIRE(game->get_winner() == "C");
}
TEST_CASE("Test first player set to X")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(4);
	game->mark_board(3);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(4);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by first row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(4);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);
	game->mark_board(7);
	game->mark_board(5);
	game->mark_board(8);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	game->mark_board(1);
	game->mark_board(8);
	game->mark_board(2);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by diagnal top left")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by diagnal top right")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(2);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Determine if there is a tie 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);

	game->mark_board(2);

	game->mark_board(3);

	game->mark_board(4);
	
	game->mark_board(7);

	game->mark_board(5);

	game->mark_board(8);

	game->mark_board(6);

	game->mark_board(8);
	
	game->mark_board(9);
	
	game->mark_board(10);

	game->mark_board(11);

	game->mark_board(12);

	game->mark_board(13);

	game->mark_board(14);

	game->mark_board(15);

	game->mark_board(16);

	game->game_over();

	REQUIRE(game->get_winner() == "C");
}
TEST_CASE("Test first player set to X 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(9);
	game->mark_board(4);
	game->mark_board(13);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second column 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(3);
	game->mark_board(10);
	game->mark_board(4);
	game->mark_board(14);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);
	game->mark_board(1);
	game->mark_board(7);
	game->mark_board(2);
	game->mark_board(11);
	game->mark_board(4);
	game->mark_board(15);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by fourth column 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	game->mark_board(1);
	game->mark_board(8);
	game->mark_board(2);
	game->mark_board(12);
	game->mark_board(3);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by first row 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(2);
	game->mark_board(6);
	game->mark_board(3);
	game->mark_board(7);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second row 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(2);
	game->mark_board(7);
	game->mark_board(3);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third row 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	game->mark_board(1);
	game->mark_board(10);
	game->mark_board(2);
	game->mark_board(11);
	game->mark_board(3);
	game->mark_board(12);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by fourth row 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	game->mark_board(1);
	game->mark_board(14);
	game->mark_board(2);
	game->mark_board(15);
	game->mark_board(3);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by diagnal top left 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(6);
	game->mark_board(3);
	game->mark_board(11);
	game->mark_board(4);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by diagnal top right 4x4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	game->mark_board(1);
	game->mark_board(10);
	game->mark_board(2);
	game->mark_board(3);
	game->mark_board(7);
	game->mark_board(4);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");
}
