output: main.o
	g++ main.o -o invaders

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o invaders