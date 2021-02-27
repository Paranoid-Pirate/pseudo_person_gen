#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <tclap/CmdLine.h>
#include "locationgenerator.h"
#include "namegenerator.h"
#include "traitgenerator.h"
#include "inputparser.h"

void InputParser::inputParsing(int argc, char** argv){
    NameGen nmgen;
    LocalGen lcgen;
    TraitGen trtgen;
    bool maleOrFemale{static_cast<bool>(rand() % 2)};
    try{
        TCLAP::CmdLine cmd("Command description message", ' ', "0.1");
        TCLAP::SwitchArg nameOnlySwitch("n","nameonly","Only outputs name", cmd, false);
        TCLAP::SwitchArg traitOnlySwitch("t","traitonly","Only outputs trait", cmd, false);
        TCLAP::SwitchArg locationOnlySwitch("l","locationonly","Only outputs location", cmd, false);
        TCLAP::SwitchArg forceAmericanSwitch("a","americanoly","Forces output of location to be american", cmd, false);
        TCLAP::SwitchArg maleSwitch("m", "male", "Sets the gender of the personality to be male", cmd, false);
        TCLAP::SwitchArg femaleSwitch("f", "female", "Sets the gender of the personality to be female", cmd, false);
        cmd.parse(argc, argv);
        bool nameOnly = nameOnlySwitch.getValue();
        bool traitOnly = traitOnlySwitch.getValue();
        bool locationOnly = locationOnlySwitch.getValue();
        bool forceAmerican = forceAmericanSwitch.getValue();
        bool male = maleSwitch.getValue();
        bool female = femaleSwitch.getValue();
        if (nameOnly && male){
            std::cout<<nmgen.nameGenerator(true)<<std::endl;
        } else if (nameOnly && female){
            std::cout<<nmgen.nameGenerator(false)<<std::endl;
        } else if (nameOnly){
            std::cout<<nmgen.nameGenerator(maleOrFemale)<<std::endl;
        } else if (traitOnly){
            std::cout<<trtgen.traitGenerator()<<std::endl;
        } else if (locationOnly && forceAmerican){
            std::cout<<lcgen.locationGenerator(true)<<std::endl;
        } else if (locationOnly){
            std::cout<<lcgen.locationGenerator(false);
        } else if (male && forceAmerican){
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Name     | "<< nmgen.nameGenerator(true)<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Traits   | "<< trtgen.traitGenerator()<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Location | "<< lcgen.locationGenerator(true)<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
        } else if (female && forceAmerican){
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Name     | "<< nmgen.nameGenerator(false)<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Traits   | "<< trtgen.traitGenerator()<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Location | "<< lcgen.locationGenerator(true)<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
        } else if (forceAmerican){
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Name     | "<< nmgen.nameGenerator(maleOrFemale)<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Traits   | "<< trtgen.traitGenerator()<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Location | "<< lcgen.locationGenerator(true)<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
        } else {
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Name     | "<< nmgen.nameGenerator(maleOrFemale)<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Traits   | "<< trtgen.traitGenerator()<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
            std::cout<<"Location | "<< lcgen.locationGenerator(false)<<std::endl;
            std::cout<<"----------------------------------------"<<std::endl;
        }
    } catch (TCLAP::ArgException &e)
	{ std::cerr << "error: " << e.error() << " for arg " << e.argId() << std::endl; }
}