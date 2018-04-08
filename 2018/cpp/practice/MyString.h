#pragma

class CMyString {
public:
    CMyString();
    CMyString(const char*);
    ~CMyString();
    CMyString(const CMyString&);
private:
    char* m_pszData;

    int m_nLength;
public:
    int SetString(const char* pszParam);
    const char* GetString() const;
    void Release();
    CMyString& operator=(const CMyString &rhs);
    operator char*(void) const;
};