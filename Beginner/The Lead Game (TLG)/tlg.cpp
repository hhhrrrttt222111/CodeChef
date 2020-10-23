#include <iostream>
using namespace std;
int main(){
    int t,i=0,max,pos;
    cin>>t;
    int n=t;
    int a[4][t];
    do{
    cin>>a[0][i];
    cin>>a[1][i];
    i++;
    }while(t--);
     if(a[0][0]>a[1][0]){
        a[2][0]=1;
        a[3][0]=a[0][0]-a[1][0];}
    else{
      a[2][0]=2;
        a[3][0]=a[1][0]-a[0][0];  }
    for(i=1;i<n;i++)    {
        a[0][i]+=a[0][i-1];
        a[1][i]+=a[1][i-1];
        if(a[0][i]>a[1][i]){
        a[2][i]=1;
        a[3][i]=a[0][i]-a[1][i];}
    else
    {
      a[2][i]=2;
        a[3][i]=a[1][i]-a[0][i];  }}max=a[3][0];pos=0;
for(i=0;i<n;i++)
{
    if(max<a[3][i]){
        max=a[3][i];
        pos=i;
    }
}
cout<<a[2][pos]<<" ";
cout<<max;}
