VPATH = src:lib:include

DIRS = src lib include 
$(shell mkdir -p $(DIRS))

daily_dashboard: main.o finance.o games.o learning_tools.o
	g++ lib/*.o -o run_me

main.o: main.cpp
	g++ -c src/main.cpp -o lib/main.o

finance.o: finance.cpp
	g++ -c src/finance.cpp -o lib/finance.o

# personal.o: personal.cpp
# 	g++ -c src/personal.cpp -o lib/personal.o

learning_tools.o: learning_tools.cpp
	g++ -c src/learning_tools.cpp -o lib/learning_tools.o

games.o: games.cpp
	g++ -c src/games.cpp -o lib/games.o

clean:
	rm lib/*.o run_me
