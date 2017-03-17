#include <iostream>
#include <string>

int main(){
	std::string song = "Falling in love with you";

	std::string elvis = "Elvis Presley";

	std::string singer;
	
	while(singer != elvis){
		std::cout << "The singer who sing the \"" + song + "\"";

		std::cout << "(Hint: First letter is " << elvis[0] << ")?";

		getline(std::cin, singer);

		std::cout << (singer == elvis ? "Correct!" : "No. She is " + elvis + ".") << std::endl;
	}
}
