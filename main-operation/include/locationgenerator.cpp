#include <iostream>
#include "locationgenerator.h"

std::string LocalGen::locationGenerator(bool forceAmerican)
{
    location = getRandomElement(countryArray);
    if (forceAmerican == true){
        return location = "United States of America \n" + getRandomElement(stateArray);
    }else if (location == "United States of America"){
        return location + "\n" + getRandomElement(stateArray);
    }else {
        return location;
    }
}
