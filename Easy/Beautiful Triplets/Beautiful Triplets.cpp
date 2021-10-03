#include <iostream>
 
using namespace std;
 
int main(){
    long int n;
    int d;
    cin >> n >> d;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int counter = 0;

    //we need to use three for loops to keep track of all elements in the array
    
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (arr[j] - arr[i] > d){
                break;
            }
            for (int k = j+1; k < n; k++){
                if (arr[k] - arr[j] > d){
                    break;
                }
                if ((arr[j] - arr[i] == d) && (arr[k] - arr[j] == d)){
                    counter++;
                }
            }
        }
    }

    cout << counter << endl;
    return 0;
}
