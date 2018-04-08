#include <iostream>
#include "MyString.h"

using namespace std;

void TestFunc(const CMyString &param) {
    cout << param << endl;
}

int main() {
    CMyString strData("Hello");

    TestFunc(strData);
    TestFunc("World");

    return 0;
}