build/main.o: src/main.cpp
	g++ -c src/main.cpp -o build/main.o

arm: build/main.o
	g++ build/main.o -o build/arm

clean:
	rm build/*.o
