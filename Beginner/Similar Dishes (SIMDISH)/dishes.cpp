#include<iostream>
using namespace std;


int main() {
    int t,i,j;
    cin >> t;
    for(i=0;i<t;i++) {
      int C=0;
      string s[4];
      for(int i=0;i<4;i++)
        cin >> s[i];
      string a[4];
      for(int i=0;i<4;i++)
        cin>>a[i];
      for(int i=0;i<4;i++) {
          for(int j=0;j<4;j++) {
            if(s[i]==a[j])
            C++;
          }
      }

      if(C>=2)
        cout<<"similar"<<endl;
      else
        cout<<"dissimilar"<<endl;
    }
    return 0;
}