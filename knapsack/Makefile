# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g -Wc++17-extensions
 
# ****************************************************
# Targets needed to bring the executable up to date
 
TARGET = dynamic-programming/main
 
all: $(TARGET)



$(TARGET): $(TARGET).o 
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp utils/Item.cpp


Item.o :
	$(CC) $(CFLAGS) -o utils/Item.o utils/Item.cpp
clean:
	$(RM) dynamic-programming/*.o utils/*.o