#include <iostream>
#include <string>
#include "Dijkstra.h"


Dijkstra::Dijkstra(int nS, int nT)
    : nStart(nS), nEnd(nT)
{
    memset(nDis, inf, sizeof(nDis));
    memset(bVisit, false, sizeof(bVisit));

    graph.nodeValue[0] = "����";
    graph.nodeValue[1] = "��Ƭ";
    graph.nodeValue[2] = "����";
    graph.nodeValue[3] = "����";
    graph.nodeValue[4] = "���ӹ�";
    graph.nodeValue[5] = "����";

    memset(&graph.edge, inf, sizeof(graph.edge));
    graph.edge[0][1] = 5;
    graph.edge[0][2] = 0;
    graph.edge[1][3] = 15;
    graph.edge[1][4] = 20;
    graph.edge[2][3] = 30;
    graph.edge[2][4] = 35;
    graph.edge[3][5] = 20;
    graph.edge[4][5] = 10;
}

void Dijkstra::Calc()
{
    for (int n = 0; n < VCount; n++)
    {
        nDis[n] = graph.edge[nStart][n];
        bVisit[nStart] = true;
        if (nDis[n] != inf)
        {
            mapParent[n] = nStart;
        }
    }
    int pos = nStart;
    int min = inf;
    for (int n = 0; n < VCount; n++)
    {
        min = inf;
        // �ҳ�·�����
        for (int i = 0; i < VCount; i++)
        {
            if (!bVisit[i] && nDis[i] < min)
            {
                min = nDis[i];
                pos = i;
            }
        }
        if (min == inf)
        {
            continue;
        }
        bVisit[pos] = true;
        // ������·��
        for (int i = 0; i < VCount; i++)
        {
            int dis = graph.edge[pos][i];
            if (nDis[pos] + dis < nDis[i])
            {
                nDis[i] = nDis[pos] + dis;
                mapParent[i] = pos;
            }
        }
    }

    for (auto i: nDis)
    {
        std::cout << std::to_string(i) << "  ";
    }
}