// uci.h

#pragma once

#include <cstdint>
#include <string>

struct S_BOARD;
struct S_SEARCHINFO;

struct S_UCIOPTIONS {

    uint64_t Hash = 16;
    int MultiPV = 1;
    int Threads = 3;
    bool datagen = false;

};
// Internal flag to decide if to pretty or ugly print search results
extern bool print_uci;
// Parse a move from algebraic notation to the internal value
[[nodiscard]] int ParseMove(const std::string& move_string, S_BOARD* pos);
// parse UCI "position" command
void ParsePosition(const std::string& command, S_BOARD* pos);

// parse UCI "go" command
[[nodiscard]] bool ParseGo(const std::string& line, S_SEARCHINFO* info, S_BOARD* pos);

// main UCI loop
void UciLoop(char** argv);
