#include <iostream>

class ClassA {
public:
    void functionA() {
        std::cout << "Function from Class A" << std::endl;
    }
};

class ClassB {
public:
    void functionB() {
        std::cout << "Function from Class B" << std::endl;
    }
};

class ClassC : public ClassA, public ClassB {
public:
    void functionC() {
        std::cout << "Function from Class C" << std::endl;
    }
};

int main() {
    ClassC obj;
    obj.functionA();
    obj.functionB();
    obj.functionC();

    return 0;
}
