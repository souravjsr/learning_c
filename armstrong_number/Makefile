arm: build/main.o
	g++ build/main.o -o build/arm

build/main.o: src/main.cpp
	mkdir build
	g++ -c src/main.cpp -o build/main.o

clean:
	rm -rf build
