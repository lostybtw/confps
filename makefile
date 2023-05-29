debug:
	g++ -c ./src/main.cpp -std=c++14 -m64 -g -Wall -I include && g++ *.o -o ./build/debug/app -lncurses && ./build/debug/app
clean:
	rm -rf ./build/*.o
release:
	g++ -c ./src/main.cpp -std=c++14 -m64 -g -Wall -I include && g++ *.o ./build/release/app 

