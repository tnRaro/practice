#pragma once

namespace is {
	inline bool sign(char c){
		return c == '+' || c == '-';
	}

	inline bool number(char c){
		return c >= '0' && c <= '9';
	}

	inline bool op(char c){
		return c == '+' || c == '-' || c == '*' || c == '/' || c == '%';
	}
}
