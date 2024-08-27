#include <iostream>

class Print {
public:
    void display(int i) {
        std::cout << "Integer: " << i << std::endl;
    }

    void display(double d) {
        std::cout << "Double: " << d << std::endl;
    }

    void display(std::string str) {
        std::cout << "String: " << str << std::endl;
    }
};

int main() {
    Print obj;
    obj.display(5);
    obj.display(5.5);
    obj.display("Hello");

    return 0;
}
