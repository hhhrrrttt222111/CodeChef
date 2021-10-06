#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main() {
    int n,m,tym=0;
    cin>>n>>m;
    
    vector< pair <int,int> > alice;
    vector< pair <int,int> > bob;
    
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        alice.push_back( make_pair(a,b));
    }
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        bob.push_back( make_pair(a,b));
    }
    
    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());
    int z=0;
    
    for(int i=0;i<n;i++)
    for(int j=z;j<m;j++)
      {
          if(bob[j].first < alice[i].second && bob[j].second>=alice[i].first)
            {
                int x=max(bob[j].first,alice[i].first) , y=min(bob[j].second,alice[i].second);
                tym+=abs(y-x);
            }
          
          else if(bob[j].second < alice[i].first)
            {
                z++;
            }
            
          else if(bob[j].first >= alice[i].second)
            {
                break;
            }
          
      }
      
    cout<<tym<<"\n";
    
	// your code goes here
	return 0;
}
