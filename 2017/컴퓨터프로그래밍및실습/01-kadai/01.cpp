#include <iostream>
#include <string>

// std 네임스페이스 사용
using namespace std;

int main(){
	int row, column, index;

	string s;

	for(row = 0; row < 10; row ++){
		s = "";

		for(column = 0; column < 10; column ++){
			index = (row * 10 + column);

			/*
			index는 zero-based number이기 때문에 1을 더한다.

			(index + 1)는 int형이기 때문에 std::to_string()를 이용해 문자열로 캐스팅한다.

			std::operator+를 이용해 to_string(index + 1)와 "\t"를 합친다.
			*/
			s += to_string(index + 1) + "\t";
		}

		cout << s << endl;
	}
}
