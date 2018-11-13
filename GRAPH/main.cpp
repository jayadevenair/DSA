#include <stdio.h>
#include "graph.h"
using namespace std;

int main(void) {
    Graph *g = new Graph(5, GRAPH_UNDIRECTED);
    g->addEdge(0, 1); 
    g->addEdge(0, 4); 
    g->addEdge(1, 2); 
    g->addEdge(1, 3); 
    g->addEdge(1, 4); 
    g->addEdge(2, 3); 
    g->addEdge(3, 4); 

    g->printGraph();
    return 0;
}
