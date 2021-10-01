* In C++
```c++
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0)
    {
        int e,k,p=0;
        cin>>e>>k;
        while(e>0)
        {
            p++;
            e=e/k;
        }
        cout<<p<<endl;
        
    }
	return 0;
}

```
