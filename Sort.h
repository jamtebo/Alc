#pragma once
#include <vector>

// 从小到大排序
class Sort
{
public:

    // 冒泡
    bool Pop(int* data, const int& size);

    // 选择
    bool Choose(int* data, const int& size);

    // 快速
    bool Quick(int* data, int nBegin, int nEnd);

};

