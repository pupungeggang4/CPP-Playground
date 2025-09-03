linux:
	clang++ *.cpp ../glad/src/glad.c -o main -I../glad/include -lSDL3 -std=c++11 -
	
linuxbrew:
	clang++ *.cpp ../glad/src/gl.c -o main -I ../glad/include -I /home/linuxbrew/.linuxbrew/include -L /home/linuxbrew/.linuxbrew/lib -rpath /home/linuxbrew/.linuxbrew/lib -lglfw -lSDL3 -std=c++11

win-mingw:
	clang++ main.cpp ../glad/src/glad.c -o main -I../glad/include -lSDL3 -lSDL3_image -lSDL3_ttf -lmingw32 -std=c++11 -w

mac: dummy
	clang++ main.cpp ../glad/src/glad.c -o main -I../glad/include -I../SDL3.framework/Headers -F .. -rpath .. -framework SDL3 -framework Cocoa -framework IOKit -std=c++11 -w

dummy: