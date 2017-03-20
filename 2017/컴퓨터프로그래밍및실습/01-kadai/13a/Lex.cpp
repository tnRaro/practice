#include "Lex.h"
#include "reducer.h"

// for debug
#include <iostream>

Lex::Lex() : sigma("0123456789+-/*%"), currentState(State::Init){
}

void Lex::tokenize(const std::string &expression){
	for(const char& symbol : expression){
		if(Lex::isInSigma(symbol)){
			currentState = Lex::transition(currentState, symbol);

			
		}
	}
}

State Lex::transition(State current, char input) {
	switch(current){
		case State::Init:
			return reducer::init(input);
		case State::Sign:
			return reducer::sign(input);
		case State::Number:
			return reducer::number(input);
		case State::Operator:
			return reducer::op(input);
		default:
			return State::Reject;
	}
}

bool Lex::isInSigma(char input){
	for(const char& alphabet : sigma){
		if(alphabet == input){
			return true;
		}
	}
	return false;
}
