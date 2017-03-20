#include <iostream>

using namespace std;

int f(int n){
	int value = 1;

	for(int i = 1; i <= n; i ++){
		cout << value << ", " << i << endl;
		value *= i;
	}

	return value;
}

int main(){
	cout << f(10) << endl;

	return 0;
}
