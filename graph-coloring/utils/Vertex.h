
class Vertex
{

public:
    Vertex(int index, int color); //constructor

    int GetIndex();

    void SetIndex(int index);

    int GetColor();

    void SetColor(int color);

private: //member variables
    int m_Color;
    int m_Index;
};
