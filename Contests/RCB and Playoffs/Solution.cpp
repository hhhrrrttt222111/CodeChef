#include<iostream>
using namespace std;
int main()
{
    // test cases t
    int t;
    cin>>t;
    while(t--)
    {
        // x = earned points , y = want Y points , z = games left
        int x,y,z;
        cin>>x>>y>>z;
        //if win = 2 point 
        // draw = 1 points
        // lose = 0 points 
        // to want more than y poitnts we can multiply left games *2 and add x ie(already earned)
        int add= z*2+x;
        if(add>=y)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
	  
