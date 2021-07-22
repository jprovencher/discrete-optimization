#include <list>
#include "Vertex.h"
#include "Graph.h"
#include <iostream>
#include <memory>
#include <string>
#include <algorithm>
#include <functional>

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

void Graph::AddVertex(Vertex *newVertex)
{
   vertexList->push_back(newVertex);
}
Vertex *Graph::FindVertexById(int id)
{
   std::list<Vertex *>::iterator it;
   it = vertexList->begin();
   std::advance(it, id);
   return *it;
}

std::list<Vertex *>* Graph::GetVertices()
{
   return vertexList;
}

int Graph::GetSmallestAvailableColor(std::list<int>* colorList){
   (*colorList).sort();
   int j = 0;
   std::list<int>::iterator it;
   for(it = colorList->begin();it!=colorList->end();it++)
   {
      if(j!=(*it))
      {
         return j;
      }
      else{
         j++;
      }
   }
   return j;
}
