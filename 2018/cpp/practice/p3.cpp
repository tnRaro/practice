#include <iostream>
#include "MyString.h"

using namespace std;

int main() {
    CMyString strData, strTest;
    strData.SetString("Hello");
    strTest.SetString("World");

    CMyString strNewData(strData);
    cout << strNewData.GetString() << endl;
    
    strNewData = strTest;
    cout << strNewData.GetString() << endl;

    return 0;
}