#include "Sort.h"
#include <algorithm>
// Ã°ÅÝ
bool Sort::Pop(int* data, const int& size)
{
    return true;
}

// Ñ¡Ôñ
bool Sort::Choose(int* data, const int& size)
{
    for (int nIndex = 0; nIndex < size; nIndex++)
    {
        int nMix = data[nIndex];
        int nMixIndex = nIndex;

        for (int i = nIndex; i < size; i++)
        {
            if (data[i] < nMix)
            {
                nMix = data[i];
                nMixIndex = i;
            }
        }

        std::swap(data[nMixIndex], data[nIndex]);
    }
    
    return true;
}

// ¿ìËÙ
bool Sort::Quick(int* data, int nBegin, int nEnd)
{
    if (nEnd <= nBegin)
    {
        return true;
    }
    int i = nBegin;
    int j = nEnd;
    int key = data[nBegin];
    while (i < j)
    {
        while (i < j && data[j] >= key)
        {
            j--;
        }

        if (i < j)
        {
            data[i] = data[j];
        }

        while (i < j && data[i] <= key)
        {
            i++;
        }

        if (i < j)
        {
            data[j] = data[i];
        }
    }
    data[i] = key;
    Quick(data, nBegin, i-1);
    Quick(data, i+1, nEnd);
    return true;
}