//tic_tac_toe_manager.h
#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
using std::ostream; using std::string; using std::vector; using std::unique_ptr;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager 
{
    public:
    void save_game(unique_ptr<TicTacToe>& game);
    friend ostream& operator<<(ostream&, const TicTacToeManager&);
    void get_winner_total(int& o, int& w, int& t);

    private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win{0};
    int o_win{0};
    int ties{0};
    void update_winner_count(string winner);

};
#endif