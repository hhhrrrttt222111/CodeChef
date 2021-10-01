#include <iostream>
using namespace std;

int func(int t)
{
    if(t==0){
        return 0;
    }
    int k;
    char a[8][8];
    cin>>k;
    if(k>64){
        return 0;
    }
    for(int j=0;j<8;j++){
        for(int s=0;s<8;s++){
            a[j][s]='X';
        }
    }
    a[0][0]='O';
    if(k>8)
    {
       for( int e=1;e<8;e++){
          a[0][e]='.';
        }
        for(int r=0;r<k-8;r++){
            a[1][r]='.';
        }
    } 
    
    else{
        for(int i=1;i<k;i++)
        {
          a[0][i]='.';  
        }
    }
    for(int d=0;d<8;d++){
        for(int f=0;f<8;f++){
           cout<<a[d][f];
        }
        cout<<"\n";
    }
    cout<<"\n";
    return func(--t);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	if(t>64){
	    return 0;
	}
	func(t);
	return 0;
}
