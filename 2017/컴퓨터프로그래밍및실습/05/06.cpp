#include <iostream>
#include <string>

int main(){
	std::string a, b;

	std::cout << "white your password: ";

	std::cin >> a;

	std::cout << "re-white your password: ";

	std::cin >> b;

	std::cout << (a == b ? "same" : "not same") << std::endl;
	return 0;
}
