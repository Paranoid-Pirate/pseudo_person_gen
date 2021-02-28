COMPILER = G++
FLAGS = -std=c++11 -Wall 
FILES = src/main.cpp src/inputparser.cpp src/persongenerator.cpp src/namegenerator.cpp src/locationgenerator.cpp src/traitgenerator.cpp

persongen:
	$(COMPILER) $(FLAGS) -o pgen $(FILES)

clean:
	rm pgen
