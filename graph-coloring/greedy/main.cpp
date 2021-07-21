/*
*   Author: Joe Provencher -- jprovencher@spptel.com
*   Last changed: 2021-06-22 16:46:24
*   Description:  Implémentation de l'algorithme gourmand pour la colorisation de graphes.  Tiré de Diestel - Graph Theory (5ième édition)
*   License: MIT
*/

/* 

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

    /* 
1. Énumérer les vertex dans un ordre lambda
2. Pour chaque vertex:
    2.1 Assigner le plus petit code de couleur disponible pas déjà assigné à un voisin



 */

    Graph *myGraph = new Graph();


    int numVertex = 0;
    int numEdges = 0;
    std::fstream newfile;
    std::string delimiter = " ";
    newfile.open(argv[1], std::ios::in); //open a file to perform read operation using file object
    if (newfile.is_open())
    { //checking whether the file is open
        std::string tp;
        int i = 0;
        while (getline(newfile, tp))
        { //read data from file object and put it into string.
            //std::cout << tp << "\n"; //print the data of the string
            size_t pos = 0;
            std::string token1;
            std::string token2;
            int j = 0;
            // while ((pos = tp.find(delimiter)) != std::string::npos)
            // {
            pos = tp.find(delimiter);
            token1 = tp.substr(0, pos);

            // std::cout << "token1:" << token1 << std::endl;
            tp.erase(0, pos + delimiter.length());
            //pos = tp.find(delimiter);
            token2 = tp.substr(0);
            // std::cout << "token2:" << token2 << std::endl;
            if (i == 0)
            {
                numVertex = std::stoi(token1);
                numEdges = std::stoi(token2);
                // capacity = std::stoi(token2);
                int k = 0;
                for (k = 0; k < numVertex; k++)
                {
                    Vertex *newVertex = new Vertex(k, -1);
                    myGraph->AddVertex(newVertex);
                }
                // std::cout << "ajout de " << myGraph->GetOrder() << " vertex" << std::endl;
                // std::cout << " contenu de item 0" << myGraph->FindVertexById(2)->GetIndex() << " vertex" << std::endl;

            }
            else
            {
                Vertex* v1 = myGraph->FindVertexById(std::stoi(token1));
                Vertex* v2  = myGraph->FindVertexById(std::stoi(token2));
                std::cout << "CONNEXION Vertex 1 ID: " << v1->GetIndex() << " VERS Vertex 2 ID: " << v2->GetIndex() << std::endl;
                v1->AddNeighbour(v2);
                v2->AddNeighbour(v1);

            }
            // }
            i++;
        }
    }

    newfile.close(); //On ferme le fichier.




    return 0;
}
