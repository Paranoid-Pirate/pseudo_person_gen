#include <iostream>
#include "locationgenerator.h"

std::string LocalGen::locationGenerator(bool forceAmerican)
{
    location = getRandomElement(countryArray);
    if (forceAmerican == true){
        return location = "United States of America \n---------------------------------------- \nState    | " + getRandomElement(stateArray);
    }else if (location == countryArray[0]){
        return location + "\n" + getRandomElement(stateArray);
    }else {
        return location;
    }
}
