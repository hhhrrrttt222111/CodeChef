#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

int t, n;



int main()
{   
    scanf("%d", &t);
    while(t > 0){
        scanf("%d", &n);
        string out = "";
        for(int i = 0; i < floor(n/3); i++){
            out += "21";
        }
        if(n%3 == 0){
            cout << out + "\n";
        }else if(n%3 == 1){
            cout << "1" + out + "\n";
        }else{
            cout << out + "2\n";
        }
        t -= 1;

    }
}