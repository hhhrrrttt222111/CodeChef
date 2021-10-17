#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
you are a very busy man. You have a big schedule of activities. Your aim is to do as much as activities as possible

for each activity, you know the starting time and ending time 

you have to do as much activities as possible

Approach :
Sort according to the ending time, if a specific activity ends early means we have more time to spend on other activities

We will be able to do a new activity only if the start timeof next >= end time of previous activity 
*/

bool Compare(pair <int,int> p1,pair <int,int> p2)
{
    return p1.second<p2.second;
}

int main()
{
    int t,n,s,e;

    cin>>t;

    vector <pair<int,int>> v;

    while(t--)
    {
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>s>>e;
            v.push_back(make_pair(s,e));
        }

        //activity selection algorithm

        sort(v.begin(),v.end(),Compare);

        //start picking the activities
        //we can always do the first activity 

        int res=1;
        int fin=v[0].second;

        //iterate over all the activities 

        for(int i=1;i<n;i++)
        {
            if(v[i].first>=fin)
            {
                fin=v[i].second;
                res++;
            }
        }

        cout<<res<<endl;
        v.clear();
    }


    return 0;
}