
#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
ll MOD=1e9+7;



struct Team
{
	string name;
	int point;
	int net_goal;
};

bool operator<(Team t1,Team t2)
{
	 if(t1.point==t2.point)
	 {
	   return t1.net_goal<t2.net_goal;	
	 }
	 else
	  return t1.point<t2.point;
}
int main()
{
	 int tc;
	 cin>>tc;
	 while(tc--)
	 {
	 	 map<string,int>res;
	 	 map<string,int>goal;
	 	 string h_team,a_team,vs;
	 	 int h_goal,a_goal;
        for(int i=1;i<=12;i++)
        {
        	 cin>>h_team>>h_goal>>vs>>a_goal>>a_team;
        	 if(h_goal>a_goal)
        	  {
        	  	res[h_team]+=3;
			  }
			 else if(a_goal>h_goal)
			 {
			 	res[a_team]+=3;
			 }
			 else
			 {
			 	res[a_team]+=1;
			 	res[h_team]+=1;
			 }
			 goal[h_team]+=(h_goal-a_goal);
			 goal[a_team]+=(a_goal-h_goal);
		}
		priority_queue<Team>pq;
		Team t1;
		for(auto it=res.begin();it!=res.end();it++)
		{
		     t1.name=it->first;
		     t1.point=it->second;
		     t1.net_goal=goal[it->first];
		     pq.push(t1);
		}
		cout<<pq.top().name<<" ";
		pq.pop();
		cout<<pq.top().name<<"\n";
		pq.pop();
		
	
	 }
}
