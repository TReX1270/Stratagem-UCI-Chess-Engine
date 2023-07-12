// hashkey.h

#pragma once

#include "types.h"

struct S_BOARD;

[[nodiscard]] Bitboard GeneratePosKey(const S_BOARD* pos);
