#pragma once
#include "BinarySearch.h"
#include <vector>


class BinarySearch
{
public:
    int GetIndex(std::vector<int>& vecData, const int& nTarget);

    int Get(std::vector<int>& vecData, const int& nTarget, int nBegin, int nEnd);

    int GetIndexWhile(std::vector<int>& vecData, const int& nTarget);
};

