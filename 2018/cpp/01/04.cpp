#include <iostream>

void Swap(int &a, int&b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 5, b = 3;

    std::cout << "a: " << a
            << ", b: " << b << std::endl;
    
    Swap(a, b);

    std::cout << "a: " << a
            << ", b: " << b << std::endl;
    return 0;
}