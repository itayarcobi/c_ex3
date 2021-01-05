CC =gcc
AR =ar
OBJECTS_MAINSORT=mainsort.o
OBJECTS_MAINTXT=maintxt.o
OBJECTS_ISORT=isort.o
OBJECTS_TXTFIND=searchtxt.o
FLAGS=-Wall -g -fPIC

all: isort txtfind

isort: $(OBJECTS_MAINSORT) $(OBJECTS_ISORT)
	$(CC) $(FLAGS) -o isort $(OBJECTS_MAINSORT) $(OBJECTS_ISORT)
txtfind: $(OBJECTS_MAINTXT) $(OBJECTS_TXTFIND)
	$(CC) $(FLAGS) -o txtfind $(OBJECTS_MAINTXT) $(OBJECTS_TXTFIND)
isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c
searchtxt.o: searchtxt.c searchtxt.h
	$(CC) $(FLAGS) -c searchtxt.c
mainsort.o: mainsort.c isort.h
	$(CC) $(FLAGS) -c mainsort.c isort.h
maintxt.o: maintxt.c searchtxt.h
	$(CC) $(FLAGS) -c maintxt.c	searchtxt.h



.PHONY: clean all isort txtfind
clean:
	rm -f *.o *.gch  isort txtfind