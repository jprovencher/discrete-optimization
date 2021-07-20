
class Graph
{

public:
    Graph(); //constructor
    void CreateColorList();
    int GetOrder();
    Vertex *addVertex();

private: //member variables
    std::list<Vertex *> *vertexList;
    int* ColorList;

};
