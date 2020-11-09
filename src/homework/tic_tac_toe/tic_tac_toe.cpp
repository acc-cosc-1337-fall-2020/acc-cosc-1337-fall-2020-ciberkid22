//cpp
#include <iostream>
#include <vector>
#include <string>
#include "tic_tac_toe.h"

using std::string; using std::vector; using std::cout; using std::cin;

bool TicTacToe::game_over()
{

    if(check_board_full() == true)
    {
        winner == "C";
        return true;
    }
    if(check_column_win() == true || check_row_win() == true || check_diagnal_win() == true)
    {
        set_winner();
        return true;
    }
    else
    {
        return false;
    }
    
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else if (player == "x")
    {
        winner = "o";
    }
    else if (player == "O")
    {
        winner = "X";
    }
    else if (player == "o")
    {
        winner == "x";
    }
    
    
}



void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    point[position - 1] = player;

    set_next_player();
    if(game_over() == false)
    {
     set_next_player();
    }
}

void TicTacToe::set_next_player()
{
    if(player == "x")
    {
        player = "o";
    }
    else if(player == "X")
    {
        player = "O";
    }
    else if(player == "o")
    {
        player = "x";
    }
    else if(player =="O")
    {
        player = "X";
    }
    
}

bool TicTacToe::check_board_full()
{
    bool check = false;
    if(point[0] != " " && point[1] != " " && point[2] != " " && point[3] != " " && point[4] != " " && point[5] != " " && point[6] != " " && point[7] != " " && point[8] != " ")
    {
        check = true;
    }
    return check;
}

bool TicTacToe::check_column_win()
{
    if(
        (point[0] == point[3] && point[3] == point[6]) && point[0] != " " ||
        (point[1] == point[4] && point[4] == point[7]) && point[1] != " " ||
        (point[2] == point[5] && point[5] == point[8]) && point[2] != " "
    )
        return true;
    else
    {
        return false;
    }
    
}

bool TicTacToe::check_row_win()
{
    if(
        (point[0] == point[1] && point[1] == point[2]) && point[0] != " " ||
        (point[3] == point[4] && point[4] == point[5]) && point[3] != " " ||
        (point[6] == point[7] && point[7] == point[8]) && point[6] != " "
    )
        return true;
    else
    {
        return false;
    }
}

bool TicTacToe::check_diagnal_win()
{
    if(
        (point[0] == point[4] && point[4] == point[8]) && point[0] != " " ||
        (point[6] == point[4] && point[4] == point[2]) && point[6] != " "
    )
        return true;
    else
    {
        return false;
    }
}

void TicTacToe::clear_board()
{
    for(int i = 0; i < 9; i++)
    {
        point[i] = " ";
    }
}

std::istream& operator>>(std::istream& in, TicTacToe game)
{
    int position;
    cout<<"Enter a number from 1 to 9 to select your position: ";
	cin>>position;

	game.mark_board(position);
    cout<<game;

    return in;
}

std::ostream& operator<<(std::ostream& out, TicTacToe game)
{
    cout<<game.point[0]<<"|"<<game.point[1]<<"|"<<game.point[2]<<"\n";
    cout<<game.point[4]<<"|"<<game.point[5]<<"|"<<game.point[6]<<"\n";
    cout<<game.point[7]<<"|"<<game.point[8]<<"|"<<game.point[9]<<"\n";

    return out;
}
