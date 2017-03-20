#include <iostream>
#include <string>

int main(){
	std::string names[5];
	
	for(int i = 0; i < 5; i ++){
		std::getline(std::cin, names[i], ';');
	}

	int longestNameIndex = 0;

	for(int i = 0; i < 5; i ++){
		std::cout << (i + 1) << " : " << names[i] << std::endl;

		if(names[longestNameIndex].length() < names[i].length()){
			longestNameIndex = i;
		}
	}

	std::cout << "Longest name is " << names[longestNameIndex] << std::endl;
}
