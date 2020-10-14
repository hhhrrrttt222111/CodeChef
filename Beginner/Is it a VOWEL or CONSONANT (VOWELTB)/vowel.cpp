#include<iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if (ch =='A'|| ch =='E'|| ch =='I'|| ch =='O'|| ch =='U') {
        cout << "Vowel";
    }
    else {
        cout << "Consonant";
    }
    return 0;
}