#include <iostream>

template<typename T>
void sort(T *list, bool order = true) {
    // sorting...
}

int main() {
    int aList[5] = { 10, 20, 30, 40, 50 };

    sort(aList);

    for (auto element : aList) {
        std::cout << element << std::endl;
    }

    return 0;
}
