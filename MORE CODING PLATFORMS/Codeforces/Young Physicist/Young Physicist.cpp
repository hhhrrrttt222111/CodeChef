
// // This Code is contributed by Adarsh Kumar Singh (Github Username ----> Fury-MadMax)

// Difficulty level -  1000  Rating (Level A)
// Platform -  Codeforces
// Topic Tags - implementation , math

// ------------------------------------------------------------------> // 

//Solution

#include<bits/stdc++.h>
#define N 100005
#define mod 1000000007
#define INF 2147483647
#define ll long long
#define ln "\n"
#define fast() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  
  fast();
  // initializing the variables
  int w,p,q,r,x=0,y=0,z=0; 
  cin>>w;  // z is the number of test cases
  while(w--)
  {
    cin>>p>>q>>r; // taking the input from the user
    x=x+p;  // storing and adding the value of p in x variable
    y=y+q;  // storing and adding the value of q in y variable
    z=z+r;  // storing and adding the value of r in z variable
  } 
  
  if(x==0 && y==0 && z==0)
  {
    cout<<"YES";  // if the above condition holds it will print YES
  }
  else
  {
    cout<<"NO";  // else NO
  }
} 
