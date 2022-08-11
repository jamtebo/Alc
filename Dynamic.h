#pragma once
#include <map>
#include <string>
#include <vector>
class Dynamic
{
public:
    Dynamic() : nBestW(0), nTargetW(0) {}

    void Calc();

    void Init();

    int GetUnit();

    std::vector<std::vector<int>> best_weight;
    std::map<int, std::vector<std::string>> best_choose;

    std::vector<std::string> bestChoose;
    int nBestW;

    std::map<std::string, int> mapWeight;
    std::map<std::string, int> mapValue;
    int nTargetW;
};

