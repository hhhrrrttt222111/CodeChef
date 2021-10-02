#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Implementation of Topological Sorting on a Directed Acyclic Graph (DAG)

vector <long int> adj[100001];  // Vector which stores the adjacency list
stack <long int> order;         // Stack which stores the order
bool vis[100001];               // Array storing state of edges (visited/unvisited)

void toposort(long int v); 

int main(){

	long int n,m;           // No of vertics and edges respectively
	cin>>n>>m;

	for(long int i = 0;i<m;i++){
	    long int u,v;
	    cin>>u>>v;
	    adj[u].push_back(v); // vertices containing one of the edges are input in form of adjacency list

	}
	for(long int i = 1;i<=n;i++){

	    vis[i]=false;       // Initializing all the edges to unvisited
	}
	for(long int i = 1;i<=n;i++){
	    if(!vis[i]){  

		toposort(i);    // If the edge is unvisited then we apply toposort
	    }
	}


	while (order.empty() == false){  // Order is shown in output
			cout << order.top() << " ";
			order.pop();
		}

}

void toposort(long int v)
{
    vis[v]=true;                // assign edge visited 
    for(long long int i = 0;i<adj[v].size();i++){
        if(!vis[adj[v][i]])     // Every unvisited child of the edge is visited recursively 
        toposort(adj[v][i]);
    }

    order.push(v);              // Required edge is pushed in order stack
}

