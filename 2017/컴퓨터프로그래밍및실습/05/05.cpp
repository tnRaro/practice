#include <iostream>
#include <string>

int main(){
	std::string buf;

	std::cout << "Input string: ";

	std::getline(std::cin, buf);

	int count = 0;

	for(const char& c : buf){
		if(c == 'x')
			count ++;
	}

	std::cout << "The number of 'x' is: " << count << std::endl;

	return 0;
}
