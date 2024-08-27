#include <iostream>

class AbstractClass {
public:
    virtual void abstractFunction() = 0;

    void normalFunction() {
        std::cout << "This is a normal function" << std::endl;
    }
};

class Derived : public AbstractClass {
public:
    void abstractFunction() override {
        std::cout << "Implementation of abstract function" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.abstractFunction();
    obj.normalFunction();

    return 0;
}
