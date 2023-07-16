//cpp
#include "tic_tac_toe.h"
#include <cmath>
using std::cout;
bool TicTacToe::game_over()
{
    if(check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        set_winner();
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board(); 
}

void TicTacToe::mark_board(int position)
{
    pegs[position-=1] = player;
    set_next_player();
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    for(std::size_t i=0; i < game.pegs.size(); i +=std::sqrt(game.pegs.size()))
    {
        out << game.pegs[i] << "|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2]<<"\n";

        if(game.pegs.size() == 16) {out<<"|"<<game.pegs[i+3];}
    }
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    auto position = 0;

    while(position < 1 || position > std::sqrt(game.pegs.size()))
    {
        cout<<"Enter a position from 1-"<<game.pegs.size()<<": ";
        in>>position;
    }
    game.mark_board(position);
    return in;
}




void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }
    return true;  
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
        
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else if(player == "O")
    {
        winner = "X";
    }
    else
    {
        winner = "C";
    }
}