#include <iostream>
#include "../main-operation/include/locationgenerator.h"
#include "../main-operation/include/traitgenerator.h"
#include "../main-operation/include/namegenerator.h"

int main(){
    LocalGen locagen;
    TraitGen trtgen;
    NameGen nmgen;
    std::cout<<nmgen.nameGenerator(true)<<std::endl;
    std::cout<<trtgen.traitGenerator()<<std::endl;
    std::cout<<locagen.locationGenerator(false)<<std::endl;
}