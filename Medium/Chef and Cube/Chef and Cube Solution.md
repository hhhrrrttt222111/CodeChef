* In C++
```c++
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;


int main()
{   char top[10],bottom[10],fr[10],bk[10],left[10],right[10];
    long int T;
    cin>>T;
    while(T--)
    {
      cin>>fr>>bk>>left>>right>>top>>bottom;
      if(strcmp(fr,top)==0)
      {
          if(strcmp(left,fr)==0||strcmp(right,fr)==0)
          {
              cout<<"YES"<<endl;
              continue;
          }
      }

      if(strcmp(fr,bottom)==0)
      {
          if(strcmp(left,fr)==0||strcmp(right,fr)==0)
          {
              cout<<"YES"<<endl;
              continue;
          }
      }

      if(strcmp(bk,top)==0)
      {
          if(strcmp(left,bk)==0||strcmp(right,bk)==0)
          {
              cout<<"YES"<<endl;
              continue;
          }
      }

      if(strcmp(bk,bottom)==0)
      {
          if(strcmp(left,bk)==0||strcmp(right,bk)==0)
          {
              cout<<"YES"<<endl;
              continue;
          }
      }


        cout<<"NO"<<endl;
    }
return 0;
}
```
