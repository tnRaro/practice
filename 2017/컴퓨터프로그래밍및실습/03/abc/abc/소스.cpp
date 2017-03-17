#include <iostream>
#include <stdio.h>
using namespace std;
//define N 10
int main()
{ 
	
	int a[2][5] = { { 1,2,3,4,5} , {6,7,8,9,10} };
	//int a[] = { 1,2,3,4,5 };
	//int b[] = { 6,7,8,9,10 };
	int sum =0;
	int sum1 = 1;

	for (int i = 0; i < 5; i++)
		sum += a[0][i];

	for (int i = 0; i < 5; i++)
		sum1 *= a[1][i];

	cout << "Че="<<sum<< endl;
	cout << "Аі="<<sum1 << endl;
	return 0;
}