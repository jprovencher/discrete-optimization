#include "Vertex.h"


    Vertex::Vertex(int index, int color) //constructor
    {
        m_Index=index;
        m_Color=color;
    };

    int Vertex::GetIndex()
    {
       return m_Index;
    }
    void Vertex::SetIndex(int index)
    {
        m_Index=index;
    }
    int Vertex::GetColor()
    {
       return m_Color;
    }
    void Vertex::SetColor(int color)
    {
        m_Color=color;
    }
  
