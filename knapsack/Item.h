
class Item
{

public:
    Item(int index, int value, int weight, int x); //constructor
    

    int GetIndex();
    void SetIndex(int index);
    int GetValue();
    void SetValue(int value);
    int GetWeight();
    void SetWeight(int weight);
    int GetX();
    void SetX(int x);

private: //member variables

    int m_Index;
    int m_Value;
    int m_Weight;
    int m_X;
};

