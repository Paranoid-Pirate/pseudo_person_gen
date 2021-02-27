#include <iostream>
#include "traitgenerator.h"


void TraitGen::shuffleArray(std::vector<std::string>& array)
{
    int n, i;
    n = array.size();
    for (i = n-1; i > 0; --i) {
    std::swap(array[i], array[std::rand() % (i+1)]);}
}

std::string TraitGen::traitGenerator()
{
    shuffleArray(traitArray);
    std::string traits;
    std::string trait1 = traitArray.back(); traitArray.pop_back();
    std::string trait2 = traitArray.back(); traitArray.pop_back();
    std::string trait3 = traitArray.back(); traitArray.pop_back();
    return traits = trait1 + ", " + trait2 + ", " + trait3;
}
