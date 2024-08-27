#include <iostream>

class Interface {
public:
    virtual void interfaceFunction() = 0;
};

class Implementation : public Interface {
public:
    void interfaceFunction() override {
        std::cout << "Implementation of interface function" << std::endl;
    }
};

int main() {
    Implementation obj;
    obj.interfaceFunction();

    return 0;
}
