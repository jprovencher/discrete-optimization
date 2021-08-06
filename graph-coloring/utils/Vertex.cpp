#include <list>
#include "Vertex.h"

Vertex::Vertex(int index, int color) //constructor
{
    m_Index = index;
    m_Color = color;
    nbList = new std::list<Vertex *>;
};

int Vertex::GetIndex()
{
    return m_Index;
}
int Vertex::GetDegree()
{
    return nbList->size();
}
void Vertex::SetIndex(int index)
{
    m_Index = index;
}
int Vertex::GetColor()
{
    return m_Color;
}
void Vertex::SetColor(int color)
{
    m_Color = color;
}
void Vertex::AddNeighbour(Vertex *nb)
{
    nbList->push_back(nb);
}

std::list<int> *Vertex::GetNeighbourColorList()
{
    std::list<int> *nbColorList;
    nbColorList = new std::list<int>;
    std::list<Vertex *>::iterator it;
    for(it = nbList->begin(); it!= nbList->end();it++)
    {
        nbColorList->push_back((*it)->GetColor());
    }
    return nbColorList;
}
