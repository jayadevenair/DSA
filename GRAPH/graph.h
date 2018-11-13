#include <vector>

enum GraphType {
    GRAPH_DIRECTED,
    GRAPH_UNDIRECTED,
};

class Graph {
    private:
    int numVertices;
    std::vector<int> *adjList;
    GraphType graphType;

    public:
    Graph(int v, GraphType gType);
    ~Graph(void);
    void addEdge(int u, int v);
    void printGraph(void);
};
