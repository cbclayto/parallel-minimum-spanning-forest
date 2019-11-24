#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <vector>
#include <memory>

class Edge {
public:
    int root;
    int endpoint;
    int weight;
};

// Graph implemented with an adjacency list
class Graph {
public:
    // Number of edges in the graph
    int num_edges;
    // Number of vertices in the graph
    int num_nodes;

    // Adjacency list
    std::vector<std::vector<std::shared_ptr<Edge>>> edges;
};

// Flexible adjacency list representation
class flexible_al {
public:
    // Array of neighbors
    std::vector<std::shared_ptr<Edge>> neighbors;

    // Next array of neighbors in flexible adjacency list
    std::shared_ptr<flexible_al> next;
};

// Graph implemented with a flexible adjacency list
class FAL_Graph {
public:
    // Number of edges in the graph
    int num_edges;
    // Number of vertices in the graph
    int num_nodes;

    // Flexible adjacency list
    std::vector<std::shared_ptr<flexible_al>> edges;
};

/* Getters */
//static inline int num_nodes(const Graph&);
//static inline int num_edges(const Graph&);

//static inline const Vertex* begin(const Graph, Vertex);
//static inline const Vertex* end(const Graph, Vertex);
//static inline int degree(const Graph, Vertex);


/* IO */
std::shared_ptr<Graph> load_graph(const char*);
std::shared_ptr<FAL_Graph> load_FAL_graph(const char*);

//Graph load_graph_binary(const char* filename);
//void store_graph_binary(const char* filename, Graph);

void print_graph(std::shared_ptr<Graph>, bool print_weights);

void print_FAL_graph(std::shared_ptr<FAL_Graph>, bool print_weights);


/* Deallocation */
//void free_graph(Graph);


/* Included here to enable inlining. Don't look. */
//#include "graph_internal.h"

#endif