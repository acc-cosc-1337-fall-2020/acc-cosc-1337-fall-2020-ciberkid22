//h
#include <memory>
#include <fstream>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class TicTacToeData
{
    public:
    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>> get_games();

    private:
    std::string const file_name{"tictactoe_data.dat"};


};



#endif