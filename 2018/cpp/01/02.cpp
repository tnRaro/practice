#include <iostream>

template<typename T, typename U>
auto add(T t, U u) -> decltype(t + u) {
    return t + u;
}

int main() {
    auto a = 1 + 2;
    auto b = "Hi";
    auto c = { 1, 2 };
    auto sum = add(5, 0.3f);

    for (auto i : c) {
        std::cout << i << std::endl;
    }

    return 0;
}