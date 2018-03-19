#include <iostream>

int main() {
    auto a = 1 + 2;
    auto b = "Hi";
    auto c = { 1, 2 };
    auto increase = [](int x) { return x + 1; };

    for (auto i : c) {
        std::cout << i << std::endl;
    }
    
    return 0;
}