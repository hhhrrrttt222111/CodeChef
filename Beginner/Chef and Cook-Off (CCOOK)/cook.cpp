#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin>>n;
	int score[5] = {0};
	while(n--) {
	    int c=0;
	    for(int i=0; i<5; i++) {
	        cin>>score[i];
	    }
	    for(int i=0; i<5; i++) {
	        if(score[i] == 1) {
	            c++;
	        }
	    }
	    if(c == 0)  
            cout << "Beginner" << endl;
		if(c == 1)  
            cout << "Junior Developer" << endl;
		if(c == 2)  
            cout << "Middle Developer" << endl;
		if(c == 3)  
            cout << "Senior Developer" << endl;
		if(c == 4)  
            cout << "Hacker" << endl;
		if(c == 5)  
            cout << "Jeff Dean" << endl;
	}
	return 0;
}
