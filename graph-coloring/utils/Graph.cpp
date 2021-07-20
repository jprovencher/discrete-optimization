#include <list>
#include "Vertex.h"
#include "Graph.h"

Graph::Graph() //constructor
{
   vertexList = new std::list<Vertex *>;
}
void Graph::CreateColorList()
{
   //seulement des codes int pour le moment
   ColorList = new int[vertexList->size()];
   for(int i = 0 ; i++ ; i < sizeof(ColorList)/sizeof(int)){
      ColorList[i] = i;
   }
}
int Graph::GetOrder()
{
   return vertexList->size();
}

Vertex *Graph::addVertex()
{
   Vertex *newVertex = new Vertex(0, -1);
   vertexList->push_back(newVertex);
   return newVertex;
}

