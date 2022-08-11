#include "Search.h"
#include <queue>
#include <unordered_map>
// 广度优先
int Search::BFS(GraphHash& graph, const VNodeType& sourse, const VNodeType& target)
{
    int nSourseIndex = 0;
    for (int i = 0; i < VCount; i++)
    {
        if (graph.nodes[i].value == sourse)
        {
            nSourseIndex = i;
            break;
        }
    }
    struct record
    {
        record(int a, int b) :nIndex(a), nLayer(b) {}
        int nIndex;
        int nLayer;
    };
    int nLayer = 0;
    std::queue<record> que;
    que.push(record(nSourseIndex, 1));

    std::unordered_map<int, bool> check;
    while (!que.empty())
    {
        record rec = que.front();
        que.pop();
        if (check.find(rec.nIndex) != check.end())
        {
            continue;
        }
        check[rec.nIndex] = true;
        if (graph.nodes[rec.nIndex].value == target)
        {
            return rec.nLayer;
        }
        else
        {
            int temp = ++rec.nLayer;
            GraphHash::Edge* pE = graph.nodes[rec.nIndex].pNext;
            while (pE != nullptr)
            {
                que.push(record(pE->nNodeIndex, temp));
                pE = pE->pNext;
            }
        }
    }
    return -1;
}