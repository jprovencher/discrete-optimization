#include "Item.h"


    Item::Item(int index, int value, int weight, int x) //constructor
    {
        m_Index=index;
        m_Value=value;
        m_Weight=weight;
        m_X=x;
    };

    int Item::GetIndex()
    {
       return m_Index;
    }
    void Item::SetIndex(int index)
    {
        m_Index=index;
    }
    int Item::GetValue()
    {
       return m_Value;
    }
    void Item::SetValue(int value)
    {
        m_Value=value;
    }
    int Item::GetWeight()
    {
       return m_Weight;
    }
    void Item::SetWeight(int weight)
    {
        m_Weight=weight;
    }
    int Item::GetX()
    {
       return m_X;
    }
    void Item::SetX(int x)
    {
        m_X=x;
    }

