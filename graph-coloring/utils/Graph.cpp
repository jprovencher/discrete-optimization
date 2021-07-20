#include <list>
#include "Vertex.h"
#include "Graph.h"
#include <iostream>
Graph::Graph() //constructor
{
   vertexList = new std::list<Vertex *>;
}
void Graph::CreateColorList()
{
   //seulement des codes int pour le moment
   ColorList = new int[vertexList->size()];
   for (int i = 0; i < vertexList->size(); i++)
   {
      ColorList[i] = i;
   }
}
int Graph::GetOrder()
{
   return vertexList->size();
}

void Graph::addVertex(Vertex* newVertex)
{
   vertexList->push_back(newVertex);
}
