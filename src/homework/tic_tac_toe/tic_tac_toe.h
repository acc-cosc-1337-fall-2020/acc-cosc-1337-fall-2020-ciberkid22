#include <iostream>
#include <string>
#include <vector>
using std::string; using std::vector;
//h
#ifndef BRANCH_TTT_H
#define BRANCH_TTT_H
class TicTacToe
{
    public:
        bool game_over(); //check if game is over
        void start_game(string first_player); //player 1
        void mark_board(int position); //mark the board
        string get_player()const{return player;}; // return player value
        void display_board()const; //display the board in 3x3 format

    private:
        void set_next_player(); //set player X or O
        bool check_board_full(); //check if board is full
        void clear_board(); //clear the board
        string player;
        vector<string> point{9, " "};

};
#endif