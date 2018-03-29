#include "MyString.h"
#include <cstring>

CMyString::CMyString()
: m_pszData(nullptr)
, m_nLength(0) {

}
CMyString::~CMyString() {
    this->Release();
}
int CMyString::SetString(const char* pszParam) {
    this->Release();
    if (pszParam == nullptr) {
        return 0;
    }
    int nLength = std::strlen(pszParam);
    if (nLength == 0) {
        return 0;
    }
    
    this->m_pszData = new char[nLength + 1];
    std::strcpy(this->m_pszData, pszParam);
    this->m_nLength = nLength;

    return nLength;
}

const char* CMyString::GetString() const{
    return this->m_pszData;
}

void CMyString::Release() {
    if (this->m_pszData != nullptr) {
        delete[] this->m_pszData;
    }

    m_pszData = nullptr;
    m_nLength = 0;
}