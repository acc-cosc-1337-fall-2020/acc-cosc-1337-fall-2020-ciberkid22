#include "tic_tac_toe_4.h"

bool TicTacToe::check_column_win()
{
    if(
        (point[0] == point[4] && point[4] == point[8] && point[8] == point[12]) && point[0] != " " ||
        (point[1] == point[5] && point[5] == point[9] && point[9] == point[13]) && point[1] != " " ||
        (point[2] == point[6] && point[6] == point[10] && point[10] == point[14]) && point[2] != " "||
        (point[3] == point[7] && point[7] == point[11] && point[11] == point[15]) && point[3] != " "
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
        (point[0] == point[1] && point[1] == point[2] && point[2] == point[3]) && point[0] != " " ||
        (point[4] == point[5] && point[5] == point[6] && point[6] == point[7]) && point[4] != " " ||
        (point[8] == point[9] && point[9] == point[10] && point[10] == point[11]) && point[8] != " "||
        (point[12] == point[13] && point[13] == point[14] && point[14] == point[15]) && point[12] != " "
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
        (point[0] == point[5] && point[5] == point[10] && point[10] == point[15]) && point[0] != " " ||
        (point[12] == point[9] && point[9] == point[6] && point[6] == point[3]) && point[12] != " "
    )
        return true;
    else
    {
        return false;
    }
}