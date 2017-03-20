/*
괄호가 없는 5칙연산기 만들기.

다음 정규표현식을 인식하는 dfa를 만든다.
/^-?\d+(\s*[*+-\/%]\s*-?\d+)*$/

인식 예)
1
5 + 3
1 + 2 - 3 * 4 / 5

편의를 위해 공백을 무시하는 표현식으로 바꾼다.
(공백 문자를 지운 문자열을 입력한다)
/^-?\d+([*+-\/%]-?\d+)*$/

G = ({ S, A, N, O, Z }, { 0, ..., 9, +, -, *, /, % }, S, P)
S => ZA
A => OZA | λ
O => + | - | * | / | %
Z => -N | N
N => NN | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
** 0002와 같은 문자열도 인식 가능하도록 하였다.
위와 같은 생성 규칙 P를 가지는 형식 문법 G에 의해 생성되는 언어 L(G)는 다음과 같다.
L(G) = { -^ez^n(o-^fz^m)^l : z E { 0, ..., 9 }, o E { +, -, *, /, % }, n E Z, n > 0, m E N, m > 0, o E N, o }
*/

#include <iostream>
#include <string>
#include <cctype>
#include "Lex.h"

using namespace std;

int main(){
	string testcase = "10 +-2  + 3*  +4 / 5";

	Lex lexer;

	cout << "Input string: " << testcase << endl;

	lexer.tokenize(testcase);
}
