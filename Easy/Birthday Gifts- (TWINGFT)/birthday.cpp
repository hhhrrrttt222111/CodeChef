/*
===========================================================================================================================================
Problem link - https://www.codechef.com/problems/TWINGFT
===========================================================================================================================================
*/

//defining the header files -

#include <iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
//to bring the input and output fastly, we use below code.
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL);
long long int test;
  
// we are taking number of test cases from the user
 cin>>test; 
  
  //after taking the input, the number of times the loop will run in the below loop
 for(int i=0;i<test;i++){        
     long long int N=0,K=0;  
   
    //taking input of N,K
     cin>>N>>K;               
     int *gift=new int (N);
     for(int y=0;y<N;y++){
       
  // taking input of gifts prices      
       cin>>gift[y];        
     }
   // let us start sorting
    sort(gift,gift+N);         
   long long int chef=0,brother=0;  
   
        // condition is given (2*K+1<=N) 
   while(K--){     
     
   // beavuse array length N and it's elemnts will start from N-1 
     N--; 
     
   //assuming chef taking first gift 
     chef=chef+gift[N];    
     
   // we want the next previous gift
        N--;               
        
   //chef brother taking second gift      
        brother=brother+gift[N];
        
        
   }
    if(N!=0){
    N--;       
  //it's given that the second person who will take gifts can take one extra gifts at the last turn (N-- because we want the next gift of the last gift was take)      
   
      brother=brother+gift[N];      
    }
    if(chef>brother){ 
        cout<<chef<<endl;

    }  
  // according to condition the max num gift will be printed 
   
    else{
        cout<<brother<<endl;
    }
    
}
}
