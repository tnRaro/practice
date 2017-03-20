#include <iostream>

using namespace std;

int main(){
	int k, n = 0;
	int sum = 0;

	cout << "끝 수를 입력하세요>>";

	cin >> n;	// scanf와 달리 &를 쓸 필요 없다.

	for(k = 1; k <= n; k ++){
		sum += k;
	}

	cout << "1에서 " << n << "까지의 합은 " << sum << " 입니다." << endl;
}
