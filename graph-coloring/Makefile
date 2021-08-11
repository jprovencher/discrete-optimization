# ╔═══════════════════════════════════════════╗
# ║                                           ║
# ║       Makefile pour les exemples de       ║
# ║              graph-coloring               ║
# ║                                           ║
# ║                                           ║
# ╚═══════════════════════════════════════════╝


# ╔═══════════════════════════════════════════╗
# ║                                           ║
# ║     Variables du compilateur, linker.     ║
# ║                                           ║
# ║                                           ║
# ╚═══════════════════════════════════════════╝

CC = g++
CFLAGS = -Wall -g -Wc++17-extensions
 

# ╔═══════════════════════════════════════════╗
# ║                                           ║
# ║     Cibles pour les librairies et les     ║
# ║    executable dans chaque sous dossier    ║
# ║                                           ║
# ║                                           ║
# ╚═══════════════════════════════════════════╝

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
	$(RM) -r greedy/*.o dsatur/*.o utils/*.o greedy/main.dSYM dsatur/main.dSYM