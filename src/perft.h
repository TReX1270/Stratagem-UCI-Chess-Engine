// perft.h

#pragma once

struct S_BOARD;

// perft driver
void PerftDriver(int depth, S_BOARD* pos);

// perft test
unsigned long long PerftTest(int depth, S_BOARD* pos);
