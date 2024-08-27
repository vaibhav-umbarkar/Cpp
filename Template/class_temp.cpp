#include <iostream>

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }
};

int main() {
    Calculator<int> intCalc;
    Calculator<double> doubleCalc;

    std::cout << "Sum of integers: " << intCalc.add(5, 10) << std::endl;
    std::cout << "Sum of doubles: " << doubleCalc.add(5.5, 10.5) << std::endl;

    return 0;
}
