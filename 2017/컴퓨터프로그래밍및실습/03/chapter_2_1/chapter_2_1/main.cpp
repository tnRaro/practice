#include <iostream>
#include <string>

using namespace std;

int area(int, int);

int main() {
	int width, height, s;

	cout << "Input (width, height)" << endl;

	cin >> width >> height;
	
	cout << "width: " << width << "\nheight: " << height << "\ns: " << area(width, height) << endl;

	string tmp = "";
	bool isBorder;

	for (int y = 0; y < height; y ++){
		isBorder = y == 0 || y == height - 1;

		tmp += isBorder ? "+" : "|";
		for (int x = 0; x < width - 2; x++) {
			tmp += isBorder ? "-" : " ";
		}
		if(width > 1)
			tmp += isBorder ? "+" : "|";
		tmp += "\n";
	}

	cout << tmp << endl;

	return 0;
}

inline int area(int width, int height) {
	return width * height;
}