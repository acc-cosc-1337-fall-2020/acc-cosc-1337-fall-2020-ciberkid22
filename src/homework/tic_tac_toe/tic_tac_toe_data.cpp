
#include <memory>
#include <fstream>
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

//cpp
 void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
 {
     std::ofstream save_data;
     save_data.open("tictactoe_data.dat");

     for(auto& game : games)
     {
         std::vector<std::string> points = game->get_points();
         for(auto& c : points)
         {
             save_data<<c;
         }
     }

     save_data.close();
 }
std::vector<std::unique_ptr<TicTacToe>> get_games()
{
    std::ifstream read_file;
    read_file.open("tictactoe_data.dat");

    std::vector<std::unique_ptr<TicTacToe>> boards;
    string line;
    std::vector<std::string> pegs;

    while(std::getline(read_file, line))
    {
        for(auto& ch : line)
        {
            std::string string(1, ch);
            pegs.push_back(string);
        }
        std::string winner = pegs[pegs.size()-1];
        pegs.resize(pegs.size()-1);

        std::unique_ptr<TicTacToe> board;

        if(pegs.size() == 9)
        {
            board = std::make_unique<TicTacToe3>(pegs, winner);
        }
        else if (pegs.size() == 16)
        {
            board = std::make_unique<TicTacToe4>(pegs, winner);
        }

        boards.push_back(std::move(board));

        pegs.resize(0);
    }
    read_file.close();
    return boards;
}
