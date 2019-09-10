CC = g++
PROG = $(BIN)/AP1-Master

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

CPPFLAGS = -Wall -pedantic -g -o0 -pg -std=c++11 -I$(INC)

OBJS = $(OBJ)/automovel.o $(OBJ)/concessionaria.o $(OBJ)/gerenciar.o $(OBJ)/mainAP.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/automovel.o: $(INC)/automovel.h
	$(CC) $(CPPFLAGS) -c $(SRC)/automovel.cpp -o $(OBJ)/automovel.o

$(OBJ)/concessionaria.o: $(INC)/concessionaria.h
	$(CC) $(CPPFLAGS) -c $(SRC)/concessionaria.cpp -o $(OBJ)/concessionaria.o

$(OBJ)/gerenciar.o: $(SRC)/gerenciar.h
	$(CC) $(CPPFLAGS) -c $(SRC)/gerenciar.cpp -o $(OBJ)/mainAP.o

$(OBJ)/mainAP.o: $(SRC)/mainAP.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/mainAP.cpp -o $(OBJ)/mainAP.o

clean: 
	rm -f $(BIN)
