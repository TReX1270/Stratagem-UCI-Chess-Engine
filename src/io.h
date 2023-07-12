// io.h

#pragma once

#include "types.h"

struct S_BOARD;
struct S_MOVELIST;
struct S_THREADDATA;
struct S_UCIOPTIONS;

void PrintBitboard(const Bitboard bitboard);

// print board
void PrintBoard(const S_BOARD* pos);

// print attacked squares
void PrintAttackedSquares(const S_BOARD* pos, const int side);

// print move (for UCI purposes)
void PrintMove(const int move);

// print move list
void PrintMoveList(const S_MOVELIST* list);

[[nodiscard]] char* FormatMove(const int move);

void PrintUciOutput(const int score, const int depth, const S_THREADDATA* td, const S_UCIOPTIONS* options);

std::string Pick_color(int score);
