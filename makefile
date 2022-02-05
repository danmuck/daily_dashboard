VPATH = src:lib:include

DIRS = src lib include 
$(shell mkdir -p $(DIRS))

daily_dashboard: main.o finance.o
	g++ lib/main.o lib/finance.o -o run_me

main.o: main.cpp
	g++ -c src/main.cpp -o lib/main.o

finance.o: finance.cpp
	g++ -c src/finance.cpp -o lib/finance.o

clean:
	rm lib/*.o run_me
