#include <iostream>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;

    while(t--){     //the loop will run until t becomes 0
        int m, h;
        cin >> m >> h;

        float bmi = m/(h*h);    //formula for bmi
        int ans;

        if (bmi <= 18){     //bmi less than 18 : first category
            ans = 1;
        }
        else if (bmi >= 19 && bmi <= 24){   //bmi between 19 and 24 : second category
            ans = 2;
        }
        else if (bmi >= 25 && bmi <= 29){   //bmi between 25 and 29 : third category
            ans =3;
        }
        else {              //bmi above 30 : fourth category
            ans = 4;
        }

        cout << ans << endl;       //printing ans for each test case
    }
 
    return 0;
}