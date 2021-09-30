/*
Input Format:
The first argument is an integer A representing the number of nodes in the graph.
The second argument is a matrix B of size M x 2 which represents the M edges such that there is a edge directed from node B[i][0] to node B[i][1].

Output Format:
Return 1 if cycle is present else return 0.

*/
#include<bits/stdc++.h>
using namespace std;

bool isCycle(vector<bool>& vis, vector<bool> recStack, vector<vector<int>>& adj, int i){
    if(!vis[i]){
        vis[i]=true;
        recStack[i]=true;
        for(auto j=adj[i].begin();j!=adj[i].end();j++){
            if(!vis[*j] && isCycle(vis, recStack, adj, *j))
                return true;
            else if(recStack[*j])
                return true;
        }
    }
    recStack[i]=false;
    return false;
}
 
int solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> adj(A);
    
    for(int i=0;i<B.size();i++){
        adj[B[i][0]-1].push_back(B[i][1]-1);
    }
    vector<bool> vis(A, false), recStack(A, false);
    for(int i=0;i<A;i++) {
        if(isCycle(vis, recStack, adj, i))
            return 1;
    }
    return 0;
}

int main() {
	int A, M;
	cin>>A>>M;
	
	vector<vector<int>> B(M, vector<int>(2));
	for(int i=0;i<M;i++){
		cin>>B[i][0]>>B[i][1];
	}
	return 0;
}