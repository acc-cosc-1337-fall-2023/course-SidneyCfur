//h
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
using namespace std;

class TicTacToe
{


public:
    TicTacToe(){}
    TicTacToe(int size): pegs(size*size, " "){}
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    std::string get_winner() const{return winner;}
    //void display_board() const;
    
private:
	

    void clear_board();
    void set_next_player();

    void set_winner();
    std::string player;

    std::string winner;
    bool check_board_full();
protected: 
    friend ostream& operator<<(std::ostream& out, const TicTacToe& game);
    std::vector<std::string> pegs;
    virtual bool check_diagonal_win();
    virtual bool check_row_win();
    virtual bool check_column_win();
    
};


#endif