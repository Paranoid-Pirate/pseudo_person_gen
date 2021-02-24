#include <iostream>
#include <vector>
#include "../include/persongenerator.h"
#pragma once

class LocalGen : public PersonGenerator{
    private:
    std::string location;
    std::vector <std::string> stateArray {"Maryland", "California", "New York", "Washington", "Delaware", "Virginia"};
    std::vector <std::string> countryArray {"United Kingdom", "Poland", "Switzerland", "Germany", "Russia", "China", "Norway"};
    public:
    std::string locationGenerator(bool isAmerican){
        if (isAmerican == true){
            return location = "United States of America \n" + getRandomElement(stateArray);
        } else {
            return location = getRandomElement(countryArray);
        }
    }
};