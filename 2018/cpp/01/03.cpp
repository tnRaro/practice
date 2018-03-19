#include <iostream>

int main() {
    char *alphabet = new char[12];

    char start_symbol = 'a';

    for (int i = 0; i < 12; i ++) {
        alphabet[i] = start_symbol + i;
    }

    for (int i = 0; i < 12; i++) {
        std::cout << alphabet[i] << " ";
    }
    std::cout << std::endl;

    delete[] alphabet;

    return 0;
}