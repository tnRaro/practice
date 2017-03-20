#include <iostream>

using namespace std;

inline int max(int, int);

int main(){
	int a, b;

	cout << "두 수를 입력하라>>";	// no flush needed

	cin >> a >> b;

	cout << "큰 수 = " << max(a, b) << endl;
}

inline int max(int a, int b){
	return a >= b ? a : b; // 삼항연산자 condition ? true : false
}
