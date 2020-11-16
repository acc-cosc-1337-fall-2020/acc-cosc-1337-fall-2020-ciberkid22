//cpp
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using std::string; using std::ostream; using std::cout; using std::cin; 

//public functions
void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
    
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
    std::cout<<"\n";
    std::cout<<"Games X won: " << manager.x_win << "/nGames O won: " << manager.o_win << "/nGames tied: " << manager.ties;
\
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



