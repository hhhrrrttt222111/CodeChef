#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N;
        cin >> N;
        int num = 1;
        int arr[100][100];
        int c = 0;
        while(num != N * N + 1) {
            
            for(int  i = 0;i < N;i++) {
                for(int j = 0;j < N;j++) {
                   if(i + j == c) {
                       arr[i][j] = num;
                       num++;
                   } 
                }
            }
            c++;
        }
        for(int i = 0;i < N;i++) {
            for(int j = 0;j < N;j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

	return 0;
}
