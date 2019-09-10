# Makefile da disciplina Linguagem de Programação I
# Alunos: Julio Cesar e Larissa Jales 
# Avaliação prática I

CC = g++
PROG = $(BIN)/AP1

OBJ = ./build
SRC = ./src
BIN = ./AP1
INC = ./include

CPPFLAGS = -Wall -pedantic -g -o0 -pg -std=c++11 -I$(INC)

OBJS = $(OBJ)/automovel.o $(OBJ)/concessionaria.o $(OBJ)/gerenciar.o $(OBJ)/mainAP.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/automovel.o: $(SRC)/automovel.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/automovel.cpp

$(OBJ)/concessionaria.o: $(SRC)/concessionaria.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/concessionaria.cpp

$(OBJ)/gerenciar.o: $(SRC)/gerenciar.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/gerenciar.cpp

$(OBJ)/mainAP.o: $(SRC)/mainAP.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/mainAP.cpp

clean: 
	rm -f $(BIN)
