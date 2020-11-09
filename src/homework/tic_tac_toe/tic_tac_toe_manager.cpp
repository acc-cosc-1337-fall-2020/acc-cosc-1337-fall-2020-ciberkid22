//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <vector>

using std::string; using std::ostream; using std::cout; using std::cin; 

//public functions
void TicTacToeManager::save_game(TicTacToe game)
{
    games.push_back(game);

    update_winner_count(game.get_winner());
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    o = o_win;
    w = x_win;
    t = ties;

    cout<<"Games O won: "<< o;
    cout<<" Games X won: " << w;
    cout<<" Games tied: " << t;
    cout<<"\n";
}

ostream& operator << (ostream& out, const TicTacToeManager& manager)
{
    for(int i = 0; i < manager.games.size(); i++)
    {
        cout << "Game "<<i<< " winner:\n";
        cout << manager.games[i];
        cout << "\n";
    }
    return out;
}

//private function
void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X" || winner == "x")
    {
        x_win++;
    }
    else if(winner == "O" || winner == "o")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
    
}



