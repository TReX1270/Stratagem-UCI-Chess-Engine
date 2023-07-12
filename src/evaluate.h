// evaluate.cpp

#pragma once

struct S_BOARD;

// Returns if the position is a draw because there isn't enough mating material
[[nodiscard]] bool MaterialDraw(const S_BOARD* pos);
// position evaluation
[[nodiscard]] int EvalPosition(const S_BOARD* pos);
