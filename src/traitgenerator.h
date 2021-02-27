#include <iostream>
#include <vector>
#include "persongenerator.h"
#pragma once

class TraitGen : public PersonGenerator
{
    private:
    static void shuffleArray(std::vector<std::string>& array);
    std::vector <std::string> traitArray {"likes dogs", "Likes cats", "sucks lmao", "tired", "bruh", "bruh2", "bruh lol"};
    public:
    std::string traitGenerator();
};