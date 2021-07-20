
class Graph
{

public:
    Graph(); //constructor
    void CreateColorList();
    int GetOrder();
    void addVertex(Vertex* newVertex);

private: //member variables
    std::list<Vertex *> *vertexList;
    int* ColorList;

};
