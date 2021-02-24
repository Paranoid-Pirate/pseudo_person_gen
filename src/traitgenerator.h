#include <iostream>
#include <vector>
#include "../include/persongenerator.h"
#pragma once

class TraitGen : public PersonGenerator{
    private:
    std::vector <std::string> traitArray {"likes dogs", "Likes cats", "sucks lmao", "tired", "bruh", "bruh2", "bruh lol"};
    public:
    std::string traitGenerator(){
        shuffleArray(traitArray);
        std::string traits;
        std::string trait1 = traitArray.back(); traitArray.pop_back();
        std::string trait2 = traitArray.back(); traitArray.pop_back();
        std::string trait3 = traitArray.back(); traitArray.pop_back();
        return traits = trait1 + ", " + trait2 + ", " + trait3;
    }
};