//h
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board() const;
private:
    void clear_board();
    void set_next_player();
    std::string player;
    std::vector<std::string> pegs{9, " "};
    bool check_board_full();
};


#endif