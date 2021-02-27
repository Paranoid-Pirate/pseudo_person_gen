#include <iostream>
#include "namegenerator.h"

std::string NameGen::nameGenerator(bool maleOrFemale){
    std::string fullname;
    if (maleOrFemale == true){
        return fullname = getRandomElement(maleFirstNames) + " " + getRandomElement(maleLastNames);
    } else {
        return fullname = getRandomElement(femaleFirstnames) + " " + getRandomElement(femaleLastNames);
    }
}

