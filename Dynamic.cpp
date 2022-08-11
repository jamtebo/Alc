#include "Dynamic.h"

void Dynamic::Calc()
{
    int unit = GetUnit();
    int n = nTargetW / unit;

    for (int i = 0; i < n; i++)
    {
        int nNowW = i * unit;
        for (auto iter = mapWeight.begin(); iter != mapWeight.end(); iter++)
        {
            if (iter->second <= nNowW)
            {
                int nDiff = nNowW - iter->second;

                int nLastIndex = (i - 1 > 0) ? i - 1 : 0;
                int nLastW = best_weight[nLastIndex][nNowW];
                int nDiffW = best_weight[nLastIndex][nDiff];

                if (iter->second + nDiffW > nLastIndex)
                {
                    best_weight[i][nNowW] = iter->second + nDiffW;
                    best_choose[i]
                }
            }

        }
    }


}

int Dynamic::GetUnit()
{
    return 1;
}

void Dynamic::Init()
{
    nTargetW = 6;
    mapWeight["water"] = 3;
    mapWeight["book"] = 1;
    mapWeight["food"] = 2;
    mapWeight["jake"] = 2;
    mapWeight["camera"] = 1;

    mapValue["water"] = 10;
    mapValue["book"] = 3;
    mapValue["food"] = 9;
    mapValue["jake"] = 5;
    mapValue["camera"] = 6;
}