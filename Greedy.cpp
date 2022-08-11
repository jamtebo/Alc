#include "Greedy.h"
#include <algorithm>
#include <iterator>

void Greedy::Init()
{
    states_need.insert({ "mt", "wa", "or", "id", "nv", "ut", "ca", "az" });
    station["kone"].insert({ "id", "nv", "ut" });
    station["ktwo"].insert({ "wa", "id", "mt" });
    station["kthree"].insert({ "or", "nv", "ca" });
    station["kfour"].insert({ "nv", "ut" });
    station["kfive"].insert({ "ca", "az" });
}

void Greedy::Calc()
{
    Init();

    std::set<std::string> finish_station;
    while (!states_need.empty())
    {
        std::set<std::string> best_cover;
        std::string strStation;
        for (auto iter = station.begin(); iter != station.end(); iter++)
        {
            std::set<std::string> sets = iter->second;
            std::set<std::string> set_cover;
            std::set_intersection(states_need.begin(), states_need.end(), sets.begin(), sets.end(), 
                std::inserter(set_cover, set_cover.begin()));
            if (set_cover.size() > best_cover.size())
            {
                best_cover.clear();
                best_cover = set_cover;
                strStation = iter->first;
            }
        }
        finish_station.insert(strStation);
        station.erase(strStation);
        std::set<std::string> setTmp;
        setTmp.swap(states_need);
        std::set_difference(setTmp.begin(), setTmp.end(), best_cover.begin(), best_cover.end(),
            std::inserter(states_need, states_need.begin()));
        
    }
}