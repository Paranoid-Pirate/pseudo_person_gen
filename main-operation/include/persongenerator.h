#include <iostream>
#include <vector>
#pragma once

class PersonGenerator
{
    protected:
    int randomNumGen(const int MAX_NUM, const int MIN_NUM);
    std::string getRandomElement(std::vector <std::string> array);
};
