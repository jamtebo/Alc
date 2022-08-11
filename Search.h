#pragma once
#include "Graph.h"
class Search
{
public:
    // 广度优先
    static int BFS(GraphHash& graph, const VNodeType& sourse, const VNodeType& target);
};

