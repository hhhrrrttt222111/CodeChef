#include <iostream>
#include <algorithm>

using namespace std;

/*
given N chopsticks of some given lengths, to eat, you need to pair two chopsticks 

two chopsticks can only be paired if the difference between their lenghts is less than or equal to D. Find out the
max number of chopstick pairs you can form.

Approach : Sort the chopsticks lenght array and pair a particular chopsticks with its nearest chopstick.
after sorting if a particular chopstick can not be paired with its immediate neighbour then we will skip this chopstick
*/

int maxPairChopsticks(int arr[],int n,int D)
{
    int ans=0;

    for(int i=0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])<=D)
        {
            ans++;
            i++;
        }
    }
    
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int D;
    cin>>D;

    sort(arr,arr+n);

    cout<<maxPairChopsticks(arr,n,D)<<endl;

    return 0;
}