#include <iostream>
#include "MyString.h"

using namespace std;

CMyString TestFunc(void) {
    CMyString strTest("TestFunc() return");

    cout << strTest << endl;

    return strTest;
}

int main() {
    TestFunc();

    return 0;
}
