#pragma once
#include <map>
#include <set>
#include <string>

class Greedy
{
public:
    void Init();

    void Calc();

    std::set<std::string> states_need;
    std::map<std::string, std::set<std::string>> station;
};

