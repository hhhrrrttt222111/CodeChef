#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int* input(int n)
{
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    return arr;
}
int gcd(int a,int b){
    if(b==0)
       return a;
    return gcd(b,a%b);
}
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int *arrA = input(n);
        int *arrB = input(n);
        int OutFirst[n], OutSecond[n];
        int temp_a = -1, temp_b = -1;
        int min_v = INT_MAX;
        for(int i=0;i<n;i++){
            int x = (arrA[0] + arrB[i])%n;
            if(min_v>x){
                temp_a = i;
                min_v = x;
            }
            else{
                if(min_v==x){
                    temp_b = i;
                }
            }
        }
        int y = n;
        int i = 0;
        for(int j=temp_a;y--;j++){
            OutFirst[i] = (arrA[i] + arrB[j%n])%n;
            i++;
        }
        if(temp_b!=-1){
            int y = n;
            int i = 0;
            for(int j=temp_b;y--;j++){
                OutSecond[i] = (arrA[i] + arrB[j%n])%n;
                i++;
            }
        }
        bool flag1 = true;
        if(temp_b!=-1){
            for(int i=0;i<n;i++){
                if(OutSecond[i]>OutFirst[i]){
                        break;
                }else{
                    if(OutSecond[i]<OutFirst[i]){
                        flag1 = false;
                        break;
                    }
                }
            }
        }
        if(flag1){
            for(int i=0;i<n;i++){
                cout << OutFirst[i] << " ";
            }
        }else{
            for(int i=0;i<n;i++){
                cout << OutSecond[i] << " ";
            }
        }
        cout << endl;

    }
}
