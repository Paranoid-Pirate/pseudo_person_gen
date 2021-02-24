#include <iostream>
#include "namegenerator.h"

int main(){
    NameGen nmgen;
    bool maleOrFemale = true;
    std::cout<<nmgen.nameGenerator(maleOrFemale)<<std::endl;
}