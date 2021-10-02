#include<iostream>
#include<queue>
using namespace std;
bool isSafe(int** arr,int v,int n,int c,int color[]){
	for(int i=0;i<n;i++){
		if(arr[v][i]==1 && c==color[i])
			return false;
	}
	return true;
}
bool mcoloring(int** arr,int n,int v,int m,int color[]){
	if(v==n)
		return true;
	for(int c=1;c<=m;c++){
		if(isSafe(arr,v,n,c,color)){
			color[v]=c;
			if(mcoloring(arr,n,v+1,m,color))
				return true;
			color[v]=0;
		}
	}
	return false;
}
bool bfsmethod(int** arr,int n,int m,int color[]){
	int visited[n];
	int max_color=1;
	for(int i=0;i<n;i++)
		visited[i]=0;
	queue<int>q;
	for(int i=0;i<n;i++){
		if(visited[i]==1)
			continue;
		visited[i]=1;
		q.push(i);
		while(!q.empty()){
			int u=q.front();
			q.pop();
			for(auto x=arr[i].begin();x!=arr[i].end();x++){
				if(color[u]==color[*x]){
					color[*x]++;
				}
				max_color=max(max_color,max(color[u],color[*x]));
				if(max_color>m)
					return false;
				if(visited[*x]!=1){
					visited[*x]=1;
					q.push(*x);
				}
			}
		}
	}
	return true;
}
int main(){
	int n=4;
	int** arr=new int*[n];
	int color[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
		color[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	}
	int m=3;
	cout<<"****By Backtracking\n";
	if(mcoloring(arr,n,0,m,color)){
		for(int i=0;i<n;i++)
			cout<<i<<" -> "<<color[i]<<endl;
	}
	else
		cout<<"Not possible\n";
	cout<<"****By BFS traversal\n";
	for(int i=0;i<n;i++)
		color[i]=0;
	if(bfsmethod(arr,n,m,color)){
		for(int i=0;i<n;i++)
			cout<<i<<" -> "<<color[i]<<endl;
	}
	else
		cout<<"Not possible\n";
	return 0;
}