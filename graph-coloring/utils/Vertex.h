class Vertex
{

public:
    Vertex(int index, int color); //constructor
    int GetDegree();
    int GetIndex();

    void SetIndex(int index);

    int GetColor();

    void SetColor(int color);

    void AddNeighbour(Vertex *);
    std::list<int> *GetNeighbourColorList();

private: //member variables
    int m_Color;
    int m_Index;
    std::list<Vertex *> *nbList;
};
