/* Given an integer n, return all distinct solutions to the n-queens puzzle.
Each solution contains a distinct board configuration of the n-queens’ placement, where 'Q' and '.' both indicate a queen and an empty space respectively.
*/
#include<bits/stdc++.h>
using namespace std;

bool ispossible(int i,int j,int A,vector<string> v)
{
    int a,b;
    a=i;
    b=j;
    a--;
    while(a>=0)
    {
        if(v[a][b]=='Q')
        {
            return false;
        }
        a--;
    }
    a=i;
    b=j;
    a--;
    b--;
    while(a>=0 && b>=0) 
    {
        if(v[a][b]=='Q')
        {
            return false;
        }
        a--;
        b--;
    }
    
    a=i;
    b=j;
    a--;
    b++;
    while(a>=0 && b<A) 
    {
        if(v[a][b]=='Q')
        {
            return false;
        }
        a--;
        b++;
    }
    return true;
}

void queen(int A,vector<string> &v,vector<vector<string> > &ans,int index)
{
    if(index>=A)
    {
        ans.push_back(v);
        return;
    }
    
    for(int i=0;i<A;i++)
    {
        v[index][i]='Q';
        if(ispossible(index,i,A,v))
            queen(A,v,ans,index+1);
        v[index][i]='.';
    }
}

vector<vector<string> > solveNQueens(int A) {
    
    vector<vector<string> > ans;
    if(A==2 || A==3)
    return ans;
    string x=string(A,'.');
    vector<string> v;
    for(int i=0;i<A;i++)
    v.push_back(x);
    x.clear();
    queen(A,v,ans,0);
    return ans;
}

int main() {
	int A;
	cin>>A;
	
	vector<vector<string>> res = solveNQueens(A);
	
	for(int i=0; i<res.size(); i++){
		for(int j=0; j<res[0].size(); j++){
			for(int k=0; k<res[0][j].size(); k++){
				cout<<res[i][j][k]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n \n";
	}
	return 0;
}
