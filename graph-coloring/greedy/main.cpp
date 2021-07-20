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
    std::cout << myGraph->GetOrder() << std::endl;
    myGraph->addVertex();
    std::cout << myGraph->GetOrder() << std::endl;
    myGraph->CreateColorList();
    
    return 0;
}
