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
                // numItems = std::stoi(token1);
                // capacity = std::stoi(token2);
            }
            else
            {
                // itemsList->push_back(new Item(i, std::stoi(token1), std::stoi(token2), 0));
            }
            // }
            i++;
        }
    }
    /*         std::cout << "Capacity and item numbers:" << capacity << " " << numItems << std::endl;
        std::cout << "Total items inserted:" << itemsList->size() << std::endl; */

    newfile.close(); //close the file object.

    Graph *myGraph = new Graph();
    std::cout << myGraph->GetOrder() << std::endl;

    for (int i = 0; i < 50000; i++)
    {
        Vertex *newVertex = new Vertex(i, -1);
        myGraph->addVertex(newVertex);
    }
    std::cout << myGraph->GetOrder() << std::endl;
    myGraph->CreateColorList();

    return 0;
}
