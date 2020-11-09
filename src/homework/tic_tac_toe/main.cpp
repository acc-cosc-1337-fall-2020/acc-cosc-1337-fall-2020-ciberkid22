#include <iostream>
#include <string>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using std::string; using std::cout; using std::cin;

int main() 
{
	char choice;
	TicTacToe game;
	TicTacToeManager manager;
	string player1;
	string winner;

	do{
		cout<<"Welcome to Tic-Tac-Toe! Player 1, choose if you want to be 'X' or 'O' by entering their respective letters --> ";
		cin>>player1;

		game.start_game(player1);

		
		while(game.game_over() == false)
		{
			
			cin>>game;
			cout<<game;
			
		}
		winner = game.get_winner();
		cout<<"Game! The winner is: "<<winner<<"!\n";
		manager.save_game(game);
		cout<<"Would you like to play again? Enter 'y' to continue, any other key to exit.\n";
		cin>>choice;
		
	}while(choice == 'y' || choice == 'Y');
	cout<<manager;
	return 0;
}