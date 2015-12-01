CXXFLAGS := -std=c++11 -Wall

a.out	: main.o Command.o Fan.o Invoker.o TurnOffFan.o TurnOnFan.o
	g++ $^ -o $@

clean	:
	rm -f *.o a.out
