/* 
Implémentation de l'algorithme DSATUR pour colorsation de graphes.

tiré de https://fr.wikipedia.org/wiki/DSATUR
À haut niveau:

1. Ordonner les sommets par ordre décroissant de degrés.
2. Colorer un sommet de degré maximum avec la couleur 1.
3. Choisir un sommet avec DSAT maximum. En cas d'égalité, choisir un sommet de degré maximal.
4. Colorer ce sommet avec la plus petite couleur possible.
5. Si tous les sommets sont colorés alors stop. Sinon aller en 3.

Calcul de DSAT
        DSAT(v)= nombre de couleurs différentes dans les sommets adjacents à v.

 */
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <list>
#include "../utils/Vertex.h"
#include "../utils/Graph.h"

int main(int argc, char *argv[])
{

        Graph *myGraph = new Graph();

        int numVertex = 0;
        int numEdges = 0;
        std::fstream newfile;
        std::string delimiter = " ";
        newfile.open(argv[1], std::ios::in); //open a file to perform read operation using file object
        if (newfile.is_open())
        {
                std::string tp;
                int i = 0;
                while (getline(newfile, tp))
                {
                        size_t pos = 0;
                        std::string token1;
                        std::string token2;
                        int j = 0;
                        pos = tp.find(delimiter);
                        token1 = tp.substr(0, pos);

                        tp.erase(0, pos + delimiter.length());
                        token2 = tp.substr(0);
                        if (i == 0)
                        {
                                numVertex = std::stoi(token1);
                                numEdges = std::stoi(token2);
                                int k = 0;
                                for (k = 0; k < numVertex; k++)
                                {
                                        Vertex *newVertex = new Vertex(k, 0);
                                        myGraph->AddVertex(newVertex);
                                }
                        }
                        else
                        {
                                Vertex *v1 = myGraph->FindVertexById(std::stoi(token1));
                                Vertex *v2 = myGraph->FindVertexById(std::stoi(token2));
                                std::cout << "CONNEXION Vertex 1 ID: " << v1->GetIndex() << " VERS Vertex 2 ID: " << v2->GetIndex() << std::endl;
                                v1->AddNeighbour(v2);
                                v2->AddNeighbour(v1);
                        }
                        // }
                        i++;
                }
        }

        newfile.close(); //On ferme le fichier.

        std::list<Vertex *> *vertices = myGraph->GetVertices();

        return 0;
        ;
}