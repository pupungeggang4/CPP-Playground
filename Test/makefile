linux:
	clang++ *.cpp ../glades/src/glad.c -o main -I../glades/include -lSDL3 -std=c++11 -w

win-mingw:
	clang++ main.cpp ../glades/src/glad.c -o main -I../glades/include -lSDL3 -lSDL3_image -lSDL3_ttf -lmingw32 -std=c++11 -w

mac: dummy
	clang++ main.cpp ../glad/src/glad.c -o main -I../glad/include -I../SDL3.framework/Headers -F .. -rpath .. -framework SDL3 -framework Cocoa -framework IOKit -std=c++11 -w

dummy: