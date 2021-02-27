#include <iostream>
#include <vector>
#include "persongenerator.h"
#pragma once

class NameGen : public PersonGenerator
{
    private:
    std::vector <std::string> maleFirstNames {"Dave","Dave2","dave3","dave4",};
    std::vector <std::string> maleLastNames {"James","James2","James3","james4",};
    std::vector <std::string> femaleFirstnames {"Jane1", "Jane2", "Jane3", "jane4"};
    std::vector <std::string> femaleLastNames {"Janes1", "Janes2", "Janes3", "Janes4"};
    public:
    std::string nameGenerator(bool maleOrFemale);
};