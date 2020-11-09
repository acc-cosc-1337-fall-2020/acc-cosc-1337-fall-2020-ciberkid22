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
        string get_winner(){return winner;};
        friend std::istream& operator>>(std::istream& in, TicTacToe game);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToe game);

    private:
        void set_next_player(); //set player X or O
        bool check_board_full(); //check if board is full
        void clear_board(); //clear the board
        bool check_column_win(); //check if won by column
        bool check_row_win(); //check if won by row
        bool check_diagnal_win(); //check if won by diagnol
        void set_winner(); //set the winner
        string player;
        string next_player;
        string winner;
        vector<string> point{9, " "};

};
#endif