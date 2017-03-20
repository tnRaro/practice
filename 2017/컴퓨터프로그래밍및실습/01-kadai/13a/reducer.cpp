#include "reducer.h"
#include "is.h"

State reducer::init(const char &input) {
	if(is::sign(input))		return State::Sign;
	if(is::number(input))	return State::Number;

	return State::Reject;
}

State reducer::sign(const char &input) {
	if(is::number(input))	return State::Number;

	return State::Reject;
}

State reducer::number(const char &input){
	if(is::number(input))	return State::Number;
	if(is::op(input))	 	return State::Operator;

	return State::Reject;
}

State reducer::op(const char &input) {
	if(is::number(input))	return State::Number;
	if(is::sign(input))		return State::Sign;

	return State::Reject;
}
