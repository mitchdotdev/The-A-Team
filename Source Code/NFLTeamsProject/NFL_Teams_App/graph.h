#ifndef GRAPH_H
#define GRAPH_H

#include "constants.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <limits>

// Used for comparisons sake
enum costType { INFINITY = std::numeric_limits<int>::max() };

template <typename T>
class Vertex
{
    T element;
    int position;
    bool visited;
public:
    /*
     * Constructors
     */
    Vertex();
    Vertex(T);
    Vertex(T, int);
    // Destructor
    ~Vertex();

    /*
     * Accessors
     */
    T getElement() const;
    int getPosition() const;
    bool isVisited() const;

    /*
     * Modifiers
     */
    void setElement(T);
    void setPositions(int);
    void setIsVisited(bool);
};

// Default constructor
template <typename T>
Vertex<T>::Vertex()
: element(T()), position(-1), visited(false)
{}

// Single parameter constructor
template <typename T>
Vertex<T>::Vertex(T elem)
: element(elem), position(-1), visited(false)
{}

// Multiple parameter constructor
template <typename T>
Vertex<T>::Vertex(T elem, int pos)
: element(elem), position(pos), visited(false)
{}

// sets the vertex position to -1 i.e. does not exist
template  <typename T>
Vertex<T>::~Vertex() { this->position = -1; }

// Returns element
template <typename T>
T Vertex<T>::getElement() const { return this->element; }

// Returns position of element
template <typename T>
int Vertex<T>::getPosition() const { return this->position; }

// Returns whether a vertex has been visited
template <typename T>
bool Vertex<T>::isVisited() const { return this->visited; }

// sets the vertices' element
template <typename T>
void Vertex<T>::setElement(T elem) { this->element = elem; }

// sets the vertices' position
template <typename T>
void Vertex<T>::setPositions(int pos) { this->position = pos; }

// sets whether the vertex has been visited or not
template <typename T>
void Vertex<T>::setIsVisited(bool visit) { this->visited = visit; }

//Ends Vertex Class/////////////////////////////////////////////////////

template <typename T, typename W>
class Edge
{
    T begin;
    T end;
    W weight;
    bool discovered;
public:
    /*
     * Constructors
     */
    Edge();
    Edge(T, T, W);
    // Destructor
    ~Edge();

    /*
     * Accessors
     */
    T getBegin() const;
    T getEnd() const;
    W getWeight() const;
    bool isDiscovered() const;

    /*
     * Modifiers
     */
    void setBegin(T);
    void setEnd(T);
    void setWeight(W);
    void setIsDiscovered(bool);
};

// Default constructor
template <typename T, typename W>
Edge<T,W>::Edge()
: begin(T()), end(T()), weight(W()), discovered(false)
{}

// Multiple parameter constructor
template <typename T, typename W>
Edge<T,W>::Edge(T start, T finish, W wt)
: begin(start), end(finish), weight(wt), discovered(false)
{}

// Sets the edges weight to 0 and discovery status to false
template  <typename T, typename W>
Edge<T,W>::~Edge()
{
    this->weight = 0;
    this->discovered = false;
}

// Returns the starting element
template <typename T, typename W>
T Edge<T,W>::getBegin() const { return this->begin; }

// Returns the ending element
template <typename T, typename W>
T Edge<T,W>::getEnd() const { return this->end; }

// Returns the weight
template <typename T, typename W>
W Edge<T,W>::getWeight() const { return this->weight; }

// Returns whether the edge is discovered or not
template <typename T, typename W>
bool Edge<T,W>::isDiscovered() const { return this->discovered; }

// Sets the starting element
template <typename T, typename W>
void Edge<T,W>::setBegin(T start) { this->begin = start; }

// Sets the ending element
template <typename T, typename W>
void Edge<T,W>::setEnd(T finish) { this->end = finish; }

// Sets the weight
template <typename T, typename W>
void Edge<T,W>::setWeight(W wt) { this->weight = wt; }

// Sets whether the edge is discovered or not
template <typename T, typename W>
void Edge<T,W>::setIsDiscovered(bool discovery) { this->discovered = discovery; }

//Ends Edge Class///////////////////////////////////////////////////////

template <typename T, typename W>
class Graph
{
    std::vector< Vertex<T> > vertices;
    std::vector< std::vector< Edge<T, W> > > adjacencyMatrix;
    int numOfVertices;
    /*
     * Accessors
     */
    int minDist(int []);
    int minKey(int []);

    /*
     * Algorithm output
     */
    void printDijkstra(int [], int) const;
    void printMST(int []) const;
public:
    // Constructor
    Graph(int);
    // Destructor
    ~Graph();

    /*
     * Modifiers
     */
    void addEdge(Edge<T,W>*);
    void addVertex(Vertex<T>*);

    /*
     * Accessors
     */
    int getSize() const;
    int findVertexPosition(T) const;

    /*
     * Output
     */
    void displayVertices() const;
    void displayEdges() const;

    /*
     * Algorithms
     */
    void dijkstra(int);
    void primMST();
};

// Constructor
template <typename T, typename W>
Graph<T,W>::Graph(int size)
: numOfVertices(0)
{

    vertices.reserve(size);
    adjacencyMatrix.reserve(size);

    for(int i = 0; i < size; ++i)
        adjacencyMatrix[i].resize(size);

}

// Sets the number of vertices to 0 and clears the vertices and adjacency matrix vectors
template <typename T, typename W>
Graph<T,W>::~Graph()
{
    this->numOfVertices = 0;
    this->vertices.clear();
    this->adjacencyMatrix.clear();
}

// Returns the minimum edge
template <typename T, typename W>
int Graph<T,W>::minDist(int costs[])
{
    int min = INFINITY, min_index;

    for(int i = 0; i < numOfVertices; ++i)
        if(!vertices[i].isVisited() && costs[i] <= min)
        {
            min = costs[i];
            min_index = i;
        }
    return min_index;
}

// Returns the minimum key
template <typename T, typename W>
int Graph<T,W>::minKey(int key[])
{
    int min = INFINITY, min_index;

    for (int i = 0; i < numOfVertices; ++i)
        if (!vertices[i].isVisited() && key[i] < min)
        {
            min = key[i];
            min_index = i;
        }
    return min_index;
}

// Adds edge to the adjacency matrix
template <typename T, typename W>
void Graph<T,W>::addEdge(Edge<T,W>* edge)
{
    int startPos = findVertexPosition(edge->getBegin());
    int endPos = findVertexPosition(edge->getEnd());
    W edgeWeight = edge->getWeight();

    adjacencyMatrix[startPos][endPos] = *new Edge<T,W>(edge->getBegin(),
                                                       edge->getEnd(),
                                                       edgeWeight);
}

// Adds vertex to the adjacency matrix
template <typename T, typename W>
void Graph<T,W>::addVertex(Vertex<T>* vertex)
{
    vertex->setPositions(numOfVertices);
    vertices.push_back(*vertex);

    ++numOfVertices;
}

// Returns the size of the graph
template <typename T, typename W>
int Graph<T,W>::getSize() const { return this->numOfVertices; }

// Returns the position of the parameter
template <typename T, typename W>
int Graph<T,W>::findVertexPosition(T find) const
{
    int foundPos = -1;
    bool found = false;
    int index = 0;

    while(!found && (index < numOfVertices) )
    {
        if(find == vertices[index].getElement())
        {
            foundPos = index;
            found = true;
        }
        else
            ++index;
    }

    return index;
}

// Displays all of the graph's vertices
template <typename T, typename W>
void Graph<T,W>::displayVertices() const
{
    for(int i = 0; i < numOfVertices; ++i)
        qDebug() << vertices[i].getElement() << " " << vertices[i].getPosition();
}

// Displays all of the graphs edges
template <typename T, typename W>
void Graph<T,W>::displayEdges() const
{
    for(int i = 0; i < numOfVertices; ++i)
        for(int j = 0; j < numOfVertices; ++j)
            qDebug() << adjacencyMatrix[i][j].getWeight();
}

// Performs Dijkstra's algorithm over all of the nodes
template <typename T, typename W>
void Graph<T,W>::dijkstra(int start)
{
    int costs[numOfVertices];
    std::vector< Edge<T,W> > edgesTaken;
    std::vector< std::vector< Edge<T,W> > > visitedPaths;
    visitedPaths.resize(numOfVertices);

    edgesTaken.push_back(Edge<T,W>(vertices[start].getElement(),
                                   vertices[start].getElement(),
                                   0));

    for(int i = 0; i < numOfVertices; ++i)
    {
        costs[i] = INFINITY;
        vertices[i].setIsVisited(false);
        visitedPaths[i].resize(numOfVertices);
    }

    costs[start] = 0;

    for(int i = 0; i < numOfVertices-1; ++i)
    {
        int u = minDist(costs);
        vertices[u].setIsVisited(true);

        for(int j = 0; j < numOfVertices; ++j)
        {
            if(!vertices[j].isVisited() &&
                adjacencyMatrix[u][j].getWeight() != 0 &&
                costs[u] != INFINITY &&
                costs[u] + adjacencyMatrix[u][j].getWeight() < costs[j])
            {
                if(!visitedPaths[j].empty() &&
                   visitedPaths[j].at(visitedPaths[j].size()-1).getEnd() == vertices[j].getElement())
                    visitedPaths[j].pop_back();

                visitedPaths[j].push_back(adjacencyMatrix[u][j]);
                costs[j] = costs[u] + adjacencyMatrix[u][j].getWeight();
            }
        }
    }

   printDijkstra(costs, start);

//   qDebug() << "\nPaths Taken\n___________???";
//    for(int i = numOfVertices-1; i > -1; --i)
//        for(int j = numOfVertices-1; j > -1; --j)
//            if(visitedPaths[i][j].getBegin() != "")
//                qDebug() << visitedPaths[i][j].getBegin() << " -> "
//                         << visitedPaths[i][j].getEnd()   << "  --  " << visitedPaths[i][j].getWeight();

}

// Prints the result of Dijkstra's algorithm
template<typename T, typename W>
void Graph<T,W>::printDijkstra(int costs[], int source) const
{
    qDebug() << "VERTEX          DISTANCE FROM " << vertices[source].getElement();
    for (int i = 0; i < numOfVertices; ++i)
        if(i != source)
            qDebug() << vertices[i].getElement() << costs[i];
}

// Performs Prim-Jarnik MST algorithm
template <typename T, typename W>
void Graph<T,W>::primMST()
{
    int parent[numOfVertices];
    int key[numOfVertices];

    for (int i = 0; i < numOfVertices; ++i)
    {
        key[i] = INFINITY;
        vertices[i].setIsVisited(false);
    }

    key[0] = 0;
    parent[0] = -1;

    for (int i = 0; i < numOfVertices-1; ++i)
    {
        int u = minKey(key);
        vertices[u].setIsVisited(true);
        for (int j = 0; j < numOfVertices; ++j)
            if( adjacencyMatrix[u][j].getWeight() != 0 &&
                !vertices[j].isVisited() &&
                adjacencyMatrix[u][j].getWeight() <  key[j] )
                parent[j] = u, key[j] = adjacencyMatrix[u][j].getWeight();
    }
    printMST(parent);
}

// Prints result of Prim-Jarnik MST algorithm
template <typename T, typename W>
void Graph<T,W>::printMST(int parent[]) const
{
    double totalWeight = 0;
    qDebug() << "EDGES                  WEIGHT";
    qDebug() << "-----------------------------------------";
    for (int i = 1; i < numOfVertices; ++i)
    {
        QString edges =  vertices[parent[i]].getElement() + " - " + vertices[i].getElement();
        qDebug() << edges << adjacencyMatrix[i][parent[i]].getWeight();
        totalWeight += adjacencyMatrix[i][parent[i]].getWeight();
    }
    qDebug() << "\nTOTAL MILEAGE: " << totalWeight;
}
#endif // GRAPH_H
