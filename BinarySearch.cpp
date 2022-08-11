#include "BinarySearch.h"

// ÉýÐò
int BinarySearch::GetIndex(std::vector<int>& vecData, const int& nTarget)
{
    return Get(vecData, nTarget, 0, vecData.size() - 1);
    
}

int BinarySearch::Get(std::vector<int>& vecData, const int& nTarget, int nBegin, int nEnd)
{
    if (nBegin == nEnd)
    {
        if (nTarget == vecData[nBegin])
        {
            return nBegin;
        }
        else
        {
            return -1;
        }
        
    }
    int nMid = (nBegin + nEnd) / 2;
    if (vecData[nMid] == nTarget)
    {
        return nMid;
    }
    else if (vecData[nMid] > nTarget)
    {
        return Get(vecData, nTarget, nBegin, nMid);
    }
    else
    {
        return Get(vecData, nTarget, nMid+1, nEnd);
    }
    return -1;
}

int BinarySearch::GetIndexWhile(std::vector<int>& vecData, const int& nTarget)
{
    int nBegin = 0;
    int nEnd = vecData.size() - 1;
    while (nBegin <= nEnd && nEnd != 0)
    {
        int nMid = (nBegin + nEnd) / 2;
        if (vecData[nMid] == nTarget)
        {
            return nMid;
        }
        else if (vecData[nMid] > nTarget)
        {
            nEnd = nMid;
        }
        else
        {
            nBegin = nMid + 1;
        }
    }
    return -1;
}