#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

struct node
{
    char vertex;
    struct node* next;
};
//struct node* createNode(int);

struct Graph
{
    int numVertices;
    struct node** adjLists;
};

// Create a node
struct node* createNode(int v)
{
    struct node* newNode = (node*)malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Create a graph
struct Graph* createAGraph(int vertices)
{
    struct Graph* graph = (Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjLists = (node**)malloc(vertices * sizeof(struct node*));

    int i;
    for (i = 0; i < vertices; i++)
        graph->adjLists[i] = NULL;

    return graph;
}

// Add edge
void addEdge(struct Graph* graph, char s,char d)
{
    // Add edge from s to d
    struct node* newNode = createNode(d);
    newNode->next = graph->adjLists[s];
    graph->adjLists[s] = newNode;

    // Add edge from d to s
    newNode = createNode(s);
    newNode->next = graph->adjLists[d];
    graph->adjLists[d] = newNode;
}

// Print the graph
void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct node* temp = graph->adjLists[v];
        cout << "vertex :" << v;
        while (temp)
        {
            cout<<" "<<temp->vertex<<"->";
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    struct Graph* graph = createAGraph(4);
    addEdge(graph, 'A', 'B');
    addEdge(graph, 'A', 'c');
   // addEdge(graph, A, C);
    addEdge(graph, 'C', 'B');

    printGraph(graph);

    return 0;
} 
