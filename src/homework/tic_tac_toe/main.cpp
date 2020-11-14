#include <iostream>
#include <string>
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
using std::string; using std::cout; using std::cin; using std::unique_ptr;

int main() 
{
	char choice;
	unique_ptr<TicTacToe> game;
	TicTacToeManager manager;
	string player1;
	string winner;

	do{
		int size = 0;
		cout<<"Welcome to Tic-Tac-Toe!--> ";
		while(size != 3 || size != 4)
		{
			cout<<"If you would like to play in a 3x3 board, type 3";
			cout<<"Or if you would like to play in a 4x4 board, type 4";
			cin>>size;
		}

		if(size == 3)
		{
			game = unique_ptr<TicTacToe3>();
		}
		else if(size == 4)
		{
			game = unique_ptr<TicTacToe4>();
		}

		do
		{
			cout<<"Player 1, enter 'x' to choose x, or enter 'o' to choose o";

		}while(player1 != "X" || player1 != "x" || player1 != "O" || player1 != "o");

		game->start_game(player1);

		
		while(game->game_over() == false)
		{
			cin>>*game;
			cout<<*game;
		}
		winner = game->get_winner();
		cout<<"Game! The winner is: "<<winner<<"!\n";
		manager.save_game(game);
		cout<<"Would you like to play again? Enter 'y' to continue, any other key to exit.\n";
		cin>>choice;
		
	}while(choice == 'y' || choice == 'Y');
	cout<<manager;
	return 0;
}