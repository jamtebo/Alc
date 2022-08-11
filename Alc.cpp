// Alc.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
#include <iostream>

#include "BinarySearch.h"
#include "Sort.h"
#include "Search.h"
#include "Dijkstra.h"
#include "Greedy.h"
int main()
{
    //std::vector<int> test = { 0,1,2,3,4,5,6,7,8,9,10 };
    //BinarySearch bs;
    //int n = bs.GetIndexWhile(test, 3);

    //int a[10] = { 3,-2,0,33,-2,32,30,54,22, -9};

    //Sort s;
    //s.Quick(a, 0, 9);

    //for (auto i: a)
    //{
    //    std::cout << std::to_string(i) << " ";
    //}

    //GraphHash graph;
    //int n = Search::BFS(graph, "me", "Anuj");

    //Dijkstra a(0, 5);
    //a.Calc();

    Greedy g;
    g.Calc();


    system("pause");
}