#include <iostream>

class Grandparent {
public:
    void grandparentFunction() {
        std::cout << "Function from Grandparent class" << std::endl;
    }
};

class Parent : public Grandparent {
public:
    void parentFunction() {
        std::cout << "Function from Parent class" << std::endl;
    }
};

class Child : public Parent {
public:
    void childFunction() {
        std::cout << "Function from Child class" << std::endl;
    }
};

int main() {
    Child obj;
    obj.grandparentFunction();
    obj.parentFunction();
    obj.childFunction();

    return 0;
}
