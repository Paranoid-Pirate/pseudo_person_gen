COMPILER = G++
FLAGS = -std=c++11 -Wall 
HEADER = inputparser.h locationgenerator.h persongenerator.h traitgenerator.h namegenerator.h
FILES = src/main.cpp src/inputparser.cpp src/persongenerator.cpp src/namegenerator.cpp src/locationgenerator.cpp src/traitgenerator.cpp

persongen:
	$(COMPILER) $(FLAGS) -o source $(FILES)

clean:
	rm source