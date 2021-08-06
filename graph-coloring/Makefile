# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g -Wc++17-extensions
 
# ****************************************************
# Targets needed to bring the executable up to date
 
TARGET = greedy/main
DSATUR = dsatur/main
LIBS = utils/Vertex.cpp utils/Graph.cpp


all: $(TARGET) $(DSATUR)



$(TARGET): $(TARGET).o 
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp $(LIBS)

$(DSATUR): $(DSATUR).o 
	$(CC) $(CFLAGS) -o $(DSATUR) $(DSATUR).cpp $(LIBS)

Vertex.o :
	$(CC) $(CFLAGS) -o utils/Vertex.o utils/Vertex.cpp
Graph.o :
	$(CC) $(CFLAGS) -o utils/Graph.o utils/Graph.cpp
clean:
	$(RM) greedy/*.o utils/*.o