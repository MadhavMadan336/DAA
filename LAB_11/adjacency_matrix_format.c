// TAKE THE CODE OF LAB 6 AND CHANGE THE OUTPUT TO ADJACENCY MATRIX FORMAT IN PLACE OF ADJACENCY LIST FORMAT
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Edge {
    int src, dest, weight;
};

struct Graph {
    int V, E;
    struct Edge* edges;
};

struct Graph* createGraph(int V, int E) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->E = E;
    graph->edges = (struct Edge*)malloc(E * sizeof(struct Edge));
    return graph;
}

void addEdge(struct Graph* graph, int src, int dest, int weight) {
    graph->edges[graph->E].src = src;
    graph->edges[graph->E].dest = dest;
    graph->edges[graph->E].weight = weight;
    graph->E++;
}

void constructAdjacencyMatrix(struct Graph* graph) {
    int V = graph->V;

    int** adjMatrix = (int**)malloc(V * sizeof(int*));
    for (int i = 0; i < V; i++) {
        adjMatrix[i] = (int*)malloc(V * sizeof(int));
        for (int j = 0; j < V; j++) {
            adjMatrix[i][j] = INT_MAX;
        }
    }

    for (int i = 0; i < graph->E; i++) {
        int src = graph->edges[i].src;
        int dest = graph->edges[i].dest;
        int weight = graph->edges[i].weight;
        adjMatrix[src][dest] = weight;
        adjMatrix[dest][src] = weight; // For undirected graph
    }

    printf("Adjacency Matrix:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (adjMatrix[i][j] == INT_MAX) {
                printf("INF\t");
            } else {
                printf("%d\t", adjMatrix[i][j]);
            }
        }
        printf("\n");
        free(adjMatrix[i]);
    }
    free(adjMatrix);
}

int main() {
    int V, E;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &V);
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &E);

    struct Graph* graph = createGraph(V, E);

    printf("Enter the edges in the format (src, dest, weight):\n");
    for (int i = 0; i < E; i++) {
        int src, dest, weight;
        scanf("%d %d %d", &src, &dest, &weight);
        addEdge(graph, src, dest, weight);
    }

    constructAdjacencyMatrix(graph);

    free(graph->edges);
    free(graph);

    return 0;
}
