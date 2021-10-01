//Booyre moore is used to determine the element with maximum occurences in an array.

#include<iostream>
using namespace std;

int find_majority(int a[],int size)  //to find majority element of array
{
    int maj=0,count=1;
    int i;
    for(i=1;i<size;i++)
    {
        if(a[i]==a[maj])
        {
            count++;
        }
        else
        count--;
        if(count==0)
    {
        maj=i;
        count=1;
    }
    }
    return a[maj];
}

int check(int a[],int size,int k) //to see whether count>n/2
{
    int i;
    int count=0;
    for(i=0;i<size;i++)
    {
        if(a[i]==k)
         {
             count++;
         }
    }
    if(count>size/2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
   int i,k,size;
   cout<<"\n enter size of array:";
   cin>>size;
   int a[size];
   for(i=0;i<size;i++)
   {
       cout<<"enter "<<i+1<<" th element:";
       cin>>a[i];
   }
   k=find_majority(a,size);
   if(check(a,size,k))
   {
       cout<<k<<endl;
   }
   else
   {
       cout<<"no majority element:";
   }
   return 0;

}

