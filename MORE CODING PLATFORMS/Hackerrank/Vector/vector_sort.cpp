//Vector Sort

#include<bits/stdc++.h>
using namespace std;


void vector_sort(vector<int>v)
{
    sort(v.begin(),v.end());
    for(int i:v)
    {
        cout << i << " ";
    }
    
}

int main()
{
    int size;
    cin >> size;
    int value;
    vector<int> v;
    for(int i=0;i<size;i++)
    {
        cin >> value;
        v.push_back(value);
    }

    vector_sort(v);
    
    cout<<endl;
    return 0;
}


