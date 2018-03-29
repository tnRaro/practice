#include <iostream>

class CRefTest
{
public:
    CRefTest(int &rParam) : m_nData(rParam) {}

    int GetData(void) { return m_nData; }
private:
    int &m_nData;
};

int main() {
    int a = 5;
    CRefTest b(a);
    int r = b.GetData();
    std::cout << a << r << std::endl;

    return 0;
}