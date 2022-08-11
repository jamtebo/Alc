#pragma once
#include <string>
#include <cstdarg>

#define VCount 6
typedef std::string VNodeType;
typedef int EdgeType;

// 矩阵表示
struct GraphMatrix
{
    GraphMatrix()
    {
    }
    VNodeType nodeValue[VCount];
    EdgeType edge[VCount][VCount];
};

// 单向hash表示
class GraphHash
{
public:
    GraphHash();
    struct Edge
    {
        Edge() = delete;
        Edge(int a) : nNodeIndex(a), value(1)
        {
            pNext = nullptr;
        }
        int nNodeIndex;
        EdgeType value;
        struct Edge* pNext;
    };
    struct VNode 
    {
        VNode()
        {
            pNext = nullptr;
        }
        VNodeType value;
        struct Edge* pNext;
    };
    VNode nodes[VCount];

};

class Graph
{
};

