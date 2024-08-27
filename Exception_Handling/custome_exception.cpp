#include <iostream>

class DivisionByZeroException : public std::exception {
public:
    const char* what() const throw() {
        return "Division by zero error!";
    }
};

int main() {
    int a = 10, b = 0;
    int result;

    try {
        if(b == 0) {
            throw DivisionByZeroException();
        }
        result = a / b;
        std::cout << "Result: " << result << std::endl;
    }
    catch (DivisionByZeroException& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
