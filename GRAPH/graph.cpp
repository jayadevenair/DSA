#include <iostream>
#include "graph.h"

Graph::Graph(int v, GraphType gType) {
    numVertices =  v;
    adjList =  new std::vector<int> [v];
    graphType = gType;
}

Graph::~Graph(void) {
    delete adjList;
}

void Graph::addEdge(int u, int v) {
    if (graphType == GRAPH_UNDIRECTED) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    } else if (graphType == GRAPH_DIRECTED) {
        adjList[u].push_back(v);
    }
}

void Graph::printGraph(void) {
    for (int i = 0; i < numVertices; i++) {
        std::cout <<  "Adjacency list of vertex " << i << ":    ";
        std:: cout << "head";
        for (auto x : adjList[i])
            std::cout << " -> " << x;
        std::cout << std::endl;
    }
}
