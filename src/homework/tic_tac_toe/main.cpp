#include <iostream>
#include <string>
#include "tic_tac_toe.h"
using std::string; using std::cout; using std::cin;

int main() 
{
	char choice;
	TicTacToe game;
	string player1;
	string winner;
	int position;

	do{
		cout<<"Welcome to Tic-Tac-Toe! Player 1, choose if you want to be 'X' or 'O' by entering their respective letters --> ";
		cin>>player1;

		game.start_game(player1);

		while(game.game_over() == false)
		{
			cout<<"Enter a number from 1 to 9 to select your position: ";
			cin>>position;

			game.mark_board(position);
			game.display_board();
		}
		winner = game.get_winner();
		cout<<"Game! The winner is: "<<winner<<"!\n";
		cout<<"Would you like to play again? Enter 'y' to continue, any other key to exit.\n";
		cin>>choice;
		
	}while(choice == 'y' || choice == 'Y');
	return 0;
}