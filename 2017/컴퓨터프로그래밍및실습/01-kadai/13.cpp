#include <iostream>
#include <stdexcept>

using namespace std;

int operation(char, int, int);

int main(){
	int a, b;
	char op;
	int result; // 정수 연산이기 때문에 int를 사용한다. (나눗셈에서 손실이 발생한다!)

	while(true){
		cout << "? " << flush;

		cin >> a >> op >> b;

		try{
			result = operation(op, a, b);

			cout << a << ' ' << op << ' ' << b << " = " << result << endl;
		} catch(const invalid_argument& e){
			cerr << e.what() << endl;
		}
	}
}

int operation(char op, int a, int b){
	switch(op){
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	case '%':
		return a % b;
	default:
		throw invalid_argument("알 수 없는 연산자 입니다. {+, -, *, /, %} 중 한 가지 연산자만을 지원합니다.");	// std::invalid_argument()
	}
}
