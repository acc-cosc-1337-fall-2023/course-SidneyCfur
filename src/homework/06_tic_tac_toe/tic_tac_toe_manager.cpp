//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
using namespace std;

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    cout<<"Teaparty";
    update_winner_count(b -> get_winner());
    games.push_back(std::move(b));
    
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win; x = x_win; t = ties;
}


//private

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "O")
    {
        o_win ++;
    }
    else if(winner == "X")
    {
        x_win ++;
    }
    else
    {
        ties ++;
    }
}

ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(auto& game: manager.games)
    {
        out<<*game<<"\n";
    }
    
    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"X wins: "<<manager.x_win<<"\n";
    out<<"TIES: "<<manager.ties<<"\n";

    return out;
}


