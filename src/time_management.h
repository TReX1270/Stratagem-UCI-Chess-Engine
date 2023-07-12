// time_management.h

#pragma once

struct S_SEARCHINFO;
struct S_THREADDATA;

void Optimum(S_SEARCHINFO* info, int time, int inc);
[[nodiscard]] bool StopEarly(const S_SEARCHINFO* info);
[[nodiscard]] bool TimeOver(const S_SEARCHINFO* info);
[[nodiscard]] bool NodesOver(const S_SEARCHINFO* info);
void ScaleTm(S_THREADDATA* td);
