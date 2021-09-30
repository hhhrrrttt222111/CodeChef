//Codechef Starters 11
//Problem: A Counting Problem -COUNTA
//Problem Difficulty - Medium
//Author: Anushka Garg
//Codechef Username: anushka2352
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
const int N=1e5+1;
long long int M= 1e9+7;
int main()
{
    fast;
    long long int test_Case=1,i,j,num;
    cin>>test_Case;
    while(test_Case--)
    {
      long long int n;
      cin>>n;
      vector<long long int>b(n-1);
      for(i=0;i<n-1;i++)
      {
          cin>>b[i];
      }
      if(n==2){
        long long int a1= 1e5+1-b[0];  //For an array consisting of two elements.
        a1=a1*2;
        a1-=1;
        a1%=M;
        cout<<a1<<"\n";continue;
      }
      map<long long int,long long int>mp;
      vector<long long int>a(n,-1);
      for(i=0;i<n-2;i++)
      {
          if(b[i]<b[i+1]){a[i]=b[i];mp[i]++;}
          else if(b[i]>b[i+1]){a[i+2]=b[i+1];mp[i+2]++;}
      }
      long long int ans=1;
      for(i=0;i<n;i++)
      {
          if(a[i]==(-1))
          {
              j=i;
              long long int ans1=1,ans2=1;
              vector<long long int>v;
              while(j<n&&a[j]==-1)
              {
                  if(j==0){v.push_back(b[0]);}
                  else if(j==n-1){v.push_back(b[j-1]);}
                  else{v.push_back(max(b[j],b[j-1]));}
                  j++;
              }
              for(i=1;i<v.size();i+=2)
              {
                  long long int p1= 1e5-v[i]+1;
                  ans1*=p1;
                  ans1%=M;
              }
              for(i=0;i<v.size();i+=2)
              {
                  long long int p1= 1e5-v[i]+1;
                  ans2*=p1;
                  ans2%=M;
              }
              ans2-=1;
              ans1=ans1+ans2;
              ans1=(ans1+M)%M;
              ans*=ans1;
              ans=(ans+M)%M;
              i=j-1;
          }
      }

      cout<<ans<<"\n";
    }

}
