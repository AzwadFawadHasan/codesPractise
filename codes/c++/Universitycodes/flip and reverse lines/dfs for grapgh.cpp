// C++ program to print DFS traversal from
// a given vertex in a given graph
#include <bits/stdc++.h>
using namespace std;

// Graph class represents a directed graph
// using adjacency list representation
int count;
class Graph {
	int V; // No. of vertices

	// Pointer to an array containing
	// adjacency lists
	list<int>* adj;

	// A recursive function used by DFS
	void DFSUtil(int v, bool visited[]);
	void evenu(int v, bool visited[]);
	void oddu(int v, bool visited[]);

public:
	Graph(int V); // Constructor

	// function to add an edge to graph
	void addEdge(int v, int w);

	// DFS traversal of the vertices
	// reachable from v
	void DFS(int v);
	void even(int v);
	void odd(int v);
	bool isReachable(int s, int d);


};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}



bool Graph::isReachable(int s, int d)
{
    // Base case
    if (s == d)
      return true;

    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // it will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;

    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        queue.pop_front();

        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            // If this adjacent node is the destination node, then
            // return true
            if (*i == d)
                return true;

            // Else, continue to do BFS
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }

    // If BFS is complete without visiting d
    return false;
}






void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}
int c =0;
void Graph::DFSUtil(int v, bool visited[])
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	c++;
	cout << v << " ";

	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			 DFSUtil(*i, visited);
}

void Graph::evenu(int v, bool visited[])
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	//cout <<"printing even";
	if (v%2==0){cout << v << " ";}



	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			 evenu(*i, visited);
}
void Graph::oddu(int v, bool visited[])
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	//cout <<"printing odd";
	if (v%2!=0){cout << v << " ";}



	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			 oddu(*i, visited);
}

// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
void Graph::DFS(int v)
{
	// Mark all the vertices as not visited
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	// Call the recursive helper function
	// to print DFS traversal
	DFSUtil(v, visited);
}
void Graph::even(int v)
{
	// Mark all the vertices as not visited
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	// Call the recursive helper function
	// to print DFS traversal
	evenu(v, visited);
}
void Graph::odd(int v)
{
	// Mark all the vertices as not visited
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	// Call the recursive helper function
	// to print DFS traversal
	oddu(v, visited);
}


// Driver code
int main()
{
	// Create a graph given in the above diagram
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";
	g.DFS(2);
	cout<<" \n the number of total nodes in the graphs is "<< c<< endl;
	cout << "printing even number"<< endl;
	g.even(2);
	cout << endl;
    cout << "Printing odd numbers "<< endl;
	g.odd(2);
	int u = 2 ;
	int v = 91;
	if (g.isReachable(u,v))
	{
	    cout << "There is a path from "<< u<<"to "<<v;

	}
	else
    {

        cout <<"Nah man << endl" << endl;

    }


	return 0;
}

