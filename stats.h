// stats.h
#ifndef STATS_H
#define STATS_H

#include <string>
using namespace std;

struct Stats {
    int lineCount = 0;
    int countSP_dol = 0;
    int countSP_perc = 0;
    int countSP_at = 0;
    int countID = 0;
    int countKW = 0;
    bool kwFlag = false;
    bool spFlag = false;
    bool idFlag = false;
};

#endif