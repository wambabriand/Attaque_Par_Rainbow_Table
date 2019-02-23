################################################
## Fait par Angelo Cannesso et Briand Wamba   ##
## Ce Makefile sera optimiser avec le temps   ##
##  Il est totalement d'utilisation           ##
##   	Prof. Ahmed Roshenid                  ##
##   	Group Télecom Paristech               ##
################################################

.PHONY :builder_table clean  run


run: my_lib.o sha256.o main.o
	g++ -Wall -Werror  my_lib.o sha256.o main.o -lcrypto -o crack_sha256 
	rm -f *.o 
	./crack_sha256


builder_table:  table.o my_lib.o sha256.o
	g++ -Wall -Werror table.o   my_lib.o sha256.o -lcrypto  -o create_rainbowTable 
	rm -f *.o 
	./create_rainbowTable



filtre :  filter.o my_lib.o 
	g++ -Wall -Werror filter.o   my_lib.o  -o filter 
	rm -f *.o 
	./filter

filter.o : code/filter.cpp  code/my_lib.h
	g++ -Wall -Werror  -c  code/filter.cpp



main.o: code/main.cpp  code/my_lib.h
	g++ -Wall -Werror  -c  code/main.cpp


sha256.o: code/sha256.cpp code/my_lib.h
	g++ -Wall -Werror  -c  code/sha256.cpp


table.o: code/my_lib.cpp code/my_lib.h
	g++ -Wall -Werror  -c code/table.cpp


my_lib.o: code/my_lib.cpp code/my_lib.h
	g++ -Wall -Werror  -c code/my_lib.cpp

clean :
	rm -f *.o 
	rm -f code/*.o
	
