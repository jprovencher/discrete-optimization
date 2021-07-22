
class Graph
{

public:
    Graph(); //constructor
    void CreateColorList();
    int GetOrder();
    void AddVertex(Vertex* newVertex);
    Vertex* FindVertexById(int id);
    std::list<Vertex *> * GetVertices();
    int GetSmallestAvailableColor(std::list<int>*);

private: //member variables
    std::list<Vertex *> *vertexList;
    int* ColorList;

};
