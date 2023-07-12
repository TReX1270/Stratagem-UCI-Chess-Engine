// search.h

#pragma once

#include <cstdint>
#include "board.h"
#include "uci.h"

struct Search_stack {
    int excludedMove = {};
    int16_t static_eval = {};
    int move = {};
    int ply;
    int searchKillers[2] = {};
    int double_extensions = 0;
};

struct Search_data {
    int searchHistory[2][Board_sq_num][Board_sq_num] = {};
    int CounterMoves[Board_sq_num][Board_sq_num] = {};
    int cont_hist[12][64][12][64] = {};
};

// a collection of all the data a thread needs to conduct a search
struct S_THREADDATA {
    int id = 0;
    S_BOARD pos;
    Search_data ss;
    S_SEARCHINFO info;
    PvTable pv_table;
    uint64_t nodeSpentTable[Board_sq_num][Board_sq_num] = {};
    int RootDepth;
};

// ClearForSearch handles the cleaning of the thread data from a clean state
void ClearForSearch(S_THREADDATA* td);

// Starts the search process, this is ideally the point where you can start a multithreaded search
void RootSearch(int depth, S_THREADDATA* td, S_UCIOPTIONS* options);
// SearchPosition is the actual function that handles the search, it sets up the variables needed for the search , calls the Negamax function and handles the console output
void SearchPosition(int start_depth, int final_depth, S_THREADDATA* td, S_UCIOPTIONS* options);
// Sets up aspiration windows and starts a Negamax search
[[nodiscard]] int AspirationWindowSearch(int prev_eval, int depth, S_THREADDATA* td);
// Negamax alpha beta search
[[nodiscard]] int Negamax(int alpha, int beta, int depth, bool cutnode, S_THREADDATA* td, Search_stack* ss);
// Quiescence search to avoid the horizon effect
[[nodiscard]] int Quiescence(int alpha, int beta, S_THREADDATA* td, Search_stack* ss);

[[nodiscard]] int GetBestMove(const PvTable* pv_table);

// inspired by the Weiss engine
[[nodiscard]] bool SEE(const S_BOARD* pos, const int move, const int threshold);
// Checks if the current position is a draw
[[nodiscard]] bool IsDraw(const S_BOARD* pos);
