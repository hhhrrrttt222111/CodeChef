#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int T, N, i, tim;
	string timing, P, newline;
	cin >> T;
	getline(cin, newline);
	
	while(T--)
	{
	   getline(cin, P);
	   cin >> N;
	   int Phr, Pmin, Lhr, Lmin, Hhr, Hmin, Pt, Lt, Ht;
	   
	   if (P[6] == 'A')
	      {
	         if (P[0] == '1' && P[1] == '2')
	         {
	            P[0] = '0';
	            P[1] = '0';
	         }
	         Phr = stoi(P.substr(0,2))*100;
	         Pmin = stoi(P.substr(3,2));
	         Pt = Phr + Pmin;
	         
	      }
	      else
	      {
	         if (P.substr(0,2) != "12")
	         {
	            tim = stoi(P.substr(0,2)) + 12;
	         }
	         else
	            tim = 12;
	         Phr = tim*100;
	         Pmin = stoi(P.substr(3,2));
	         Pt = Phr + Pmin;
	         
	      }  
	   
	   getline(cin, newline);
	   for(i=0; i<N; i++)
	   {
	      getline(cin, timing);
	      
	      if (timing[6] == 'A')
	      {
	         if (timing[0] == '1' && timing[1] == '2')
	         {
	            timing[0] = '0';
	            timing[1] = '0';
	         }
	         Lhr = stoi(timing.substr(0,2))*100;
	         Lmin = stoi(timing.substr(3,2));
	         Lt = Lhr + Lmin;
	         
	      }
	      else
	      {
	         if (timing.substr(0,2) != "12")
	         {
	            tim = stoi(timing.substr(0,2)) + 12;
	         }
	         else
	            tim = 12;
	         Lhr = tim*100;
	         Lmin = stoi(timing.substr(3,2));
	         Lt = Lhr + Lmin;
	         
	      }
	      
	      if (timing[15] == 'A')
	      {
	         if (timing[9] == '1' && timing[10] == '2')
	         {
	            timing[9] = '0';
	            timing[10] = '0';
	         }
	         Hhr = stoi(timing.substr(9,2))*100;
	         Hmin = stoi(timing.substr(12,2));
	         Ht = Hhr + Hmin;
	      
	      }
	      else
	      {
	         if (timing.substr(9,2) != "12")
	         {
	            tim = stoi(timing.substr(9,2)) + 12;
	         }
	         else 
	            tim = 12;
	         Hhr = tim*100;
	         Hmin = stoi(timing.substr(12,2));
	         Ht = Hhr + Hmin;
	       
	      }
	      
	      if (Pt <= Ht && Pt >= Lt)
	         cout << 1;
	         
	      else
	         cout << 0;
	   }
	   cout << endl;
	}
	return 0;
}
