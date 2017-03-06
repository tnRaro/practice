#include <iostream>

using namespace std;

string createBorder(string);

int main(){
	cout << createBorder("Hello, World!") << endl;

	return 0;
}

string createBorder(string s){
	int length = s.length();

	string header;

	header = "+";

	for(int i = 0; i < length + 2; i ++){
		header += "-";
	}

	header += "+";

	return header + "\n| " + s + " |\n" + header;
}
