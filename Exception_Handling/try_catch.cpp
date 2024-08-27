#include <iostream>

int main() {
    int a = 10, b = 0;
    int result;

    try {
        if(b == 0) {
            throw "Division by zero!";
        }
        result = a / b;
        std::cout << "Result: " << result << std::endl;
    }
    catch (const char* e) {
        std::cout << "Exception: " << e << std::endl;
    }

    return 0;
}
