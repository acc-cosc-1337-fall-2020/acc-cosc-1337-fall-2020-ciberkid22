#include "tic_tac_toe_3.h"

bool TicTacToe3::check_column_win()
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

bool TicTacToe3::check_row_win()
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

bool TicTacToe3::check_diagnal_win()
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