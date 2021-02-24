#include <iostream>
#include "traitgenerator.h"

int main(){
    TraitGen trt;
    std::srand(time(0));
    std::cout<<trt.traitGenerator()<<std::endl;
}