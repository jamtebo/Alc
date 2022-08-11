#pragma once
#include <unordered_map>

#include "Graph.h"

class Dijkstra
{
public:
    Dijkstra(int nS, int nT);

    void Calc();





    GraphMatrix graph;
    int nDis[VCount];
    bool bVisit[VCount];
    std::unordered_map<int, int> mapParent;

    int nStart;
    int nEnd;

    const int inf = 0x3f3f3f3f;
};

