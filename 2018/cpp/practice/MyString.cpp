#include "MyString.h"
#include <cstring>
#include <iostream>

CMyString::CMyString()
: m_pszData(nullptr)
, m_nLength(0) {
}
CMyString::CMyString(const char* data)
: m_pszData(nullptr)
, m_nLength(0) {
    SetString(data);
}
CMyString::~CMyString() {
    this->Release();
}
CMyString::CMyString(const CMyString &rhs)
: m_pszData(nullptr)
, m_nLength(0) {
    this->SetString(rhs.GetString());
}
CMyString::CMyString(CMyString&& rhs)
: m_pszData(nullptr)
, m_nLength(0) {
    std::cout << "CMyString(CMyString&& rhs)" << std::endl;
    
    m_pszData = rhs.m_pszData;
    m_nLength = rhs.m_nLength;

    rhs.m_pszData = nullptr;
    rhs.m_nLength = 0;
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

CMyString& CMyString::operator=(const CMyString &rhs) {
    if (this != &rhs) {
        this->SetString(rhs.GetString());
    }

    return *this;
}
CMyString::operator char*(void) const {
    return m_pszData;
}