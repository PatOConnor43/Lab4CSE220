#Nash Kleppan
#Vishal Mehta
#Patrick OConnor
#Group 19
#CSE 220 Spring 2014
#makefile
#Lab4
#This is the makefile

all: CrossReference clean

CrossReference: main.o Line.o Print.o Scanner.o Token.o
				g++ main.o Line.o Print.o Scanner.o Token.o -o CrossReference

main.o: main.cpp
		g++ -c main.cpp

Line.o: Line.cpp
		g++ -c Line.cpp

Print.o: Print.cpp
		g++ -c Print.cpp

Scanner.o: Scanner.cpp
		g++ -c Scanner.cpp

Token.o: Token.cpp
		g++ -c Token.cpp

clean:
		rm -rf *.o
