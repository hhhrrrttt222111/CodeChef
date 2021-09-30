/*
Input Format:
The first argument given is an integer A representing the number of nodes in the graph.
The second argument given is an matrix B of size M x 2 which represents the M edges such that there is a edge between node B[i][0] and node B[i][1].

Output Format:
Return 1 if cycle is present else return 0.

*/
#include<bits/stdc++.h>
using namespace std;

int find(vector<pair<int, int>>& subsets, int i){
    if(subsets[i].first!=i)
        return find(subsets, subsets[i].first);
    return subsets[i].first;
}
 
void Union(vector<pair<int, int>>& subsets, int a, int b){
    if(subsets[a].second<subsets[b].second)
        subsets[a].first=b;
    else if(subsets[a].second>subsets[b].second)
        subsets[b].first=a; 
    else {
        subsets[a].first=b;
        subsets[b].second++;
    }
}
 
int solve(int A, vector<vector<int> > &B) {
    vector<pair<int, int>> subsets(A);
 
    for(int i=0;i<A;i++){
        subsets[i].first=i;
        subsets[i].second=0;
    }
    
    for(int i=0;i<B.size();i++){
        int x=find(subsets, B[i][0]-1);
        int y=find(subsets, B[i][1]-1);
        
        if(x==y)
            return 1;
        Union(subsets, x, y);
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

