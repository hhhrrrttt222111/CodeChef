

// This Code is Contributed by  - RAKSHIT PANDEY (Github Username ---->Master-Helix)

// Difficulty level -  1000  Rating (Level B)
// Platform -  Codeforces
// Topic Tags -  Greedy , Implementation

// ------------------------------------------------------------------> // 

//Solution


#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ll long long 
#define l long long



// RAKSHIT
int main()
{
  
  fast();
  ll n;
  cin>>n;                 // input array size
  ll arr[n];                 
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];                  // input array content
  }
  ll sum=arr[n-1];         // Greedy Approach - Start from end and set max value as end value of array and then traverse the array backwards
  ll curr=arr[n-1];                   // If the traversed value is less than current max , add in total and update that current max
  for(int i=n-2;i>=0;i--)
  {
    if(arr[i]<curr)
    {
      sum+=arr[i];
      curr=arr[i];
    }
    else
    {
      if(curr>0)                      // else if curr is less than traversed value and is positve then decrease it by 1 and add in total but it should be greater than 0
      {
        sum+=curr-1;
        curr=curr-1;
      }
    }
  }
  cout<<sum;                      // Print the desired output sum
  
} 

// Time Taken to Execute - 77 ms
