#include <iostream>
#include <unordered_set>

using namespace std;

/*
we will use an unordered set for this alogrithm
out aim would be to search for potential starting points

to check if an element is a start point of now we just need to check if a number just smaller than our current number 
is present in the set or not

we will be using the unordered set to check the presence of numbers

as soon as we find a starting point we will start traversing to consecutive numbers one by one and check if they are 
present or not 

if the streak continues, we will keep updating the streak length

we are going some iterations from starting points of the streaks

for all the other elements we are just skipping them, we are not doing any work for elements whose predecessor are present

Overall TIME COMPLEXITY : O(N) and SPACE COMPLEXITY : O(N)
*/

int longestConsecutiveSubsequenceMostOptimized(int arr[],int n)
{
    unordered_set <int> s;

    for(int i=0;i<n;i++)
    {
        //insert all the elements in the set 

        s.insert(arr[i]);
    }

    //iterate over all the elements 

    int maxStreak=1;    
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i]-1)==s.end())
        {
            //this element is a starting point of a streak 
            //traverse the entire range that is contained in the streak 

            int streakLen=1;
            int nextNo=arr[i]+1;

            while(s.find(nextNo)!=s.end())
            {
                nextNo+=1;
                streakLen+=1;
            }

            maxStreak=max(streakLen,maxStreak);
        }
    }

    return maxStreak;
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
    cout<<longestConsecutiveSubsequenceMostOptimized(arr,n);

    return 0;
}