#include <iostream>

int main(){
	int i;

	for(i = 0; i < 100; i ++){
		std::cout << i + 1 << (i % 10 == 9 ? '\n' : '\t');
	}
	std::cout << std::flush;
}
