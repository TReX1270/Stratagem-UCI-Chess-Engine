// init.h

#pragma once

#include "types.h"

struct S_BOARD;
struct S_THREADDATA;

extern Bitboard PieceKeys[12][64];
extern Bitboard enpassant_keys[64];
extern Bitboard SideKey;
extern Bitboard CastleKeys[16];

void InitNewGame(S_THREADDATA* td);

void InitLeapersAttacks();

// init slider piece's attack tables
void InitSlidersAttacks(const int bishop);

void InitAll();

[[nodiscard]] Bitboard DoCheckmask(S_BOARD* pos, int color, int sq);

void DoPinMask(S_BOARD* pos, int color, int sq);
