# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g -Wc++11-extensions
 
# ****************************************************
# Targets needed to bring the executable up to date
 
TARGET = greedy/main
 
all: $(TARGET)
 
$(TARGET): $(TARGET).o utils/Vertex.o
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

Vertex.o :
	$(CC) $(CFLAGS) -o utils/Vertex.o utils/Vertex.cpp
Graph.o :
	$(CC) $(CFLAGS) -o utils/Graph.o utils/Graph.cpp
clean:
	$(RM) greedy/*.o utils/*.o