CC = gcc #C compiler
CCFLAGS = -O3 
LDFLAGS = -lm

#Can run using make all (or just make)
all: mmc

mmc: main.o mm.o 
	#matrix multiplication executable is dependent on main.o and mm.o
	$(CC) -o $@ $^ $(LDFLAGS)
	# $@ is target name mmc and $^ replace mmc and main.o and mm.o

mm.o: mm.c
	$(CC) -c $(CCFLAGS) $< 
	# $< is the name of the first pre-requisite  mm.c

main.o: main.c
	$(CC) -c $(CCFLAGS) main.c 

clean: 
	rm *.o 
	#Gets rid of all files ending in .o
	#To do this: type make clean in terminal
