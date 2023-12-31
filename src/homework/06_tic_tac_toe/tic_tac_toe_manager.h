//h
#include<string>
#include<vector>
#include "tic_tac_toe.h"
#include<memory>
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_H
using std::string; using std::vector; using namespace std;

class TicTacToeManager
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
public:
void save_game(unique_ptr<TicTacToe>& b);
void get_winner_total(int& o, int& x, int& t);
private:
vector <unique_ptr<TicTacToe>> games;
int x_win = 0;
int o_win = 0;
int ties = 0;
void update_winner_count(string winner);
};







#endif