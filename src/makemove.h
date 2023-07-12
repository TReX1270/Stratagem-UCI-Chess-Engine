// makemove.h

#pragma once

#include "types.h"

struct S_BOARD;

#define HASH_PCE(pce, sq) (pos->posKey ^= (PieceKeys[(pce)][(sq)]))

/// <summary>
/// Removes a piece from a square
/// </summary>
/// <param name="piece">the piece to be removed</param>
/// <param name="sq">the square the piece sits on</param>
/// <param name="pos">the current position</param>
void ClearPiece(const int piece, const int from, S_BOARD* pos);
/// <summary>
/// Adds a pice to a square
/// </summary>
/// <param name="piece">the piece to be added</param>
/// <param name="to">the square the piece will be added to</param>
/// <param name="pos">the current position</param>
void AddPiece(const int piece, const int to, S_BOARD* pos);

void MovePiece(const int piece, const int from, const int to, S_BOARD* pos);

void UpdateCastlingPerms(S_BOARD* pos, int source_square, int target_square);

void HashKey(S_BOARD* pos, ZobristKey key);

// make move on chess board
void MakeMove(const int move, S_BOARD* pos);
void MakeMoveLight(const int move, S_BOARD* pos);
// Reverts the previously played move
void UnmakeMove(const int move, S_BOARD* pos);
// makes a null move (a move that doesn't move any piece)
void MakeNullMove(S_BOARD* pos);
// Reverts the previously played null move
void TakeNullMove(S_BOARD* pos);
