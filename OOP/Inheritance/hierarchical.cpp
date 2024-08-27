#include <iostream>

class Base {
public:
    void baseFunction() {
        std::cout << "Function from Base class" << std::endl;
    }
};

class Derived1 : public Base {
public:
    void derived1Function() {
        std::cout << "Function from Derived1 class" << std::endl;
    }
};

class Derived2 : public Base {
public:
    void derived2Function() {
        std::cout << "Function from Derived2 class" << std::endl;
    }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;

    obj1.baseFunction();
    obj1.derived1Function();

    obj2.baseFunction();
    obj2.derived2Function();

    return 0;
}
