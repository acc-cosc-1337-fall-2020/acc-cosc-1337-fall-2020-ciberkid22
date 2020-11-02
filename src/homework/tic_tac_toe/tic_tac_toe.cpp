//cpp
#include <iostream>
#include <vector>
#include <string>
#include "tic_tac_toe.h"

using std::string; using std::vector;

bool TicTacToe::game_over()
{
    if(check_column_win() == true || check_row_win() == true || check_diagnal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "C";
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
    else
    {
        winner = "X";
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
}

void TicTacToe::display_board() const
{
    std::cout<<point[0]<<"|"<<point[1]<<"|"<<point[2]<<"\n";
    std::cout<<point[3]<<"|"<<point[4]<<"|"<<point[5]<<"\n";
    std::cout<<point[6]<<"|"<<point[7]<<"|"<<point[8]<<"\n";
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
