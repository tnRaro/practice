#include <string>
#include <stack>
#include "State.h"

class Lex{
	std::string sigma;
	State currentState;
	std::stack<int> numbers;
	int number;
	bool isInSigma(char);
public:
	Lex();
	State transition(State, char);
	void tokenize(const std::string&);
};
