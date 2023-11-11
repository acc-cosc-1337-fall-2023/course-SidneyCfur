#include "tic_tac_toe_3.h"
#include "tic_tac_toe.h"
bool TicTacToe3::check_column_win()
{
    for(int i = 0; i < 3; i++)
    {
        if((pegs[i] == pegs[i+3] && pegs[i] == pegs[i+6]) && pegs[i] != " "){
            
            return true;
        }
    }

    return false;
}
bool TicTacToe3::check_row_win()
{
    for(int i = 0; i < 9; i += 3)
    {
        if((pegs[i] == pegs[i+1] && pegs[i] == pegs[i+2]) && pegs[i] != " "){
            
            return true;
        }
    }
    return false;
}

bool TicTacToe3::check_diagonal_win()
{
    if(((pegs[0] == pegs[4] && pegs[0] == pegs[8])
    || (pegs[6] == pegs[4] && pegs[6] == pegs[2]))
    && pegs[4] != " "
    )
    {
            return true;
        }
}
