# make file variable
output := task
# link components to create executable
task: sort.o main.o
	g++ -o task sort.o main.o
	./$(output) # automatically execute application
# compile sort.cpp into object file
sort.o: sort.cpp sort.h
	g++ -Wall -ggdb -c sort.cpp
# compile main.cpp into object file
main.o: main.cpp sort.h
	g++ -Wall -ggdb -c main.cpp
# clean target to remove object files, executable and temporary file
clean:
	rm -rf *.o $(output) *# *~ 
