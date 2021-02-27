#include <iostream>
#include "locationgenerator.h"
#include "namegenerator.h"
#include "traitgenerator.h"

int main(){
    LocalGen locagen;
    TraitGen trtgen;
    NameGen nmgen;
    std::cout<<nmgen.nameGenerator(true)<<std::endl;
    std::cout<<trtgen.traitGenerator()<<std::endl;
    std::cout<<locagen.locationGenerator(false)<<std::endl;
}