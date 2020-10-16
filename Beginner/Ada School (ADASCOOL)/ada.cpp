#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int N,M;
	    cin >> N >> M;
	    if((N*M)%2==0){
	        std::cout << "YES" << std::endl;
	    }
	    else {
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
