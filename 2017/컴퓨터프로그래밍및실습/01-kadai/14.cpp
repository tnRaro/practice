#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	string buf;
	int counter[26] = {0};
	int count = 0;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

	getline(cin, buf, ';');

	// range-based for loop
	for(const char& c : buf){
		// std::isalpha
		if(isalpha(c)){
			counter[tolower(c) - 'a']++;
			count ++;
		}
	}

	cout << "총 알파벳 수 " << count << endl;

	for(int i = 0; i < 26; i ++){
		cout << (char)(i + 'a') << " (" << counter[i] << ")\t: ";

		for(int j = 0; j < counter[i]; j ++){
			cout << "*";
		}

		cout << endl;
	}
}
