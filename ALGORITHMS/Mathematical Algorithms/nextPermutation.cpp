#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3};
    
    /* Inbuilt Algorithmic Function
     * 
     * next_permutation(begin(a), end(a));
     * for(auto c: a) cout<<c<<" ";
     * cout<<"\n";
     * 
     */
    int n = a.size(),
		i = -1,
		j = -1;
    for(i=n-2; i>=0; i--){
		if(a[i]<a[i+1]){
			break;
			}
		}
    if(i>=0){
		for(j=n-1; j>=0; j--){
			if(a[j]>a[i]){
				break;
				}
			}
		}
	if(i != -1 && j != -1) swap(a[i], a[j]);
	reverse(begin(a)+i+1, end(a));
    for(auto c: a) cout<<c<<" ";
    return 0;
}
