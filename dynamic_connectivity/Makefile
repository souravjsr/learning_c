object: src/main.cpp 
	mkdir -p build
	g++ --std=c++11 -Wall -c src/main.cpp -o build/main.o 

all: object
	g++ --std=c++11 build/main.o -o build/connectivity.out 

clean:
	rm -rf build
