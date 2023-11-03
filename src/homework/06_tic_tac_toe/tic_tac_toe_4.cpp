#include "tic_tac_toe_4.h"
#include "tic_tac_toe.h"

bool TicTacToe4::check_column_win()
{
    for(int i = 0; i < 4; i++)
    {
        if((pegs[i] == pegs[i+4] && pegs[i] == pegs[i+8] && pegs[i] == pegs[i+12]) && pegs[i] != " "){
            return true;
        }
    }

    return false;
}
bool TicTacToe4::check_row_win()
{
    for(int i = 0; i < 16; i += 4)
    {
        if((pegs[i] == pegs[i+1] && pegs[i] == pegs[i+2] && pegs[i]== pegs[i+3]) && pegs[i] != " "){
            return true;
        }
    }
    return false;
}

bool TicTacToe4::check_diagonal_win()
{
    if((pegs[0] == pegs[5] && pegs[0] == pegs[10] 
    && pegs[0] == pegs[15] && pegs[0] != " ")
    || (pegs[3] == pegs[6] && pegs[3] == pegs[9] 
    && pegs[3] == pegs[12] && pegs[3] != " ")
    )
    {
            return true;
        }
}
