#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class display function" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "Derived class show function" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.display();
    obj.show();

    return 0;
}
