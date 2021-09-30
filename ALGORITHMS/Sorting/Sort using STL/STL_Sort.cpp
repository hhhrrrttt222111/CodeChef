// C++ program to sort an array
#include <bits/stdc++.h>
using namespace std;
void print(int a[], int length)
{
	for (int i = 0; i < length; ++i)
		cout << a[i] << " ";
}
int main()
{
	int a[] = { 5, 7, 2, 9, 12, 55, 0, -10, 19 };
	int l = sizeof(a) / sizeof(a[0]);
	cout << "The array before sorting is :"<<endl;
	print(a, l);
	sort(a, a + l);
	cout <<endl<< "The array after sorting is :"<<endl;
	print(a, l);
	return 0;
}
