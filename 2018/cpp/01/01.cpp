#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cin >> name;
    std::cin >> age;

    std::cout << "내 이름은 " << name << "이고, "
              << age << "살입니다." << std::endl;

    return 0;
}