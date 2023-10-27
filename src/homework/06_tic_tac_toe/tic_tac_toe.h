//h
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
using namespace std;

class TicTacToe
{
friend ostream& operator<<(std::ostream& out, const TicTacToe& game);
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    std::string get_winner() const{return winner;}
    void display_board() const;
    
private:
		
    bool check_diagonal_win();
    bool check_row_win();
    bool check_column_win();
    void clear_board();
    void set_next_player();

    void set_winner();
    std::string player;
    std::vector<std::string> pegs{9, " "};
    std::string winner;
    bool check_board_full();
};


#endif