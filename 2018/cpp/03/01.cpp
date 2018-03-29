#include <string>

enum class Job {
    Student,
    Teacher
}

class People {
private: // 생략 가능
    int age;
    std::string name;
    Job job;
public:
    People() {
        // ...
    }
    // ...
}