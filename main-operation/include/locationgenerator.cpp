#include <iostream>
#include "locationgenerator.h"

std::string LocalGen::locationGenerator(bool isAmerican){
    if (isAmerican == true){
        return location = "United States of America \n" + getRandomElement(stateArray);
    } else {
        return location = getRandomElement(countryArray);
    }
}
