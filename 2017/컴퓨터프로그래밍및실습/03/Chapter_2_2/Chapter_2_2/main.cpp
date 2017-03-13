#include <iostream>
#include <string>

using namespace std;

int main() {
	char password[11];

	cout << "Enter password to exit." << endl;

	while (true) {
		cout << "Password: ";

		// cin >> password;

		cin.getline(password, 11, '\n');

		if (strcmp(password, "C ++") == 0) {
			cout << "Exit." << endl;

			break;
		}
		else {
			cout << "Wrong password." << endl;
		}
	}
}