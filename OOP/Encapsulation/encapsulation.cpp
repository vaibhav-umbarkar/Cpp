#include <iostream>

class Student {
private:
    std::string name;
    int age;

public:
    void setName(std::string studentName) {
        name = studentName;
    }

    void setAge(int studentAge) {
        if(studentAge > 0) {
            age = studentAge;
        }
    }

    std::string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student student;
    student.setName("John Doe");
    student.setAge(20);

    std::cout << "Student Name: " << student.getName() << std::endl;
    std::cout << "Student Age: " << student.getAge() << std::endl;

    return 0;
}
