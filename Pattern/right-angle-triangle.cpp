#include <iostream>  // Header file for input/output stream

int main() {
    int rows = 5;  // Number of rows for the triangle

    // For * Pattern
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            std::cout << "*";  // Print asterisk
        }
        std::cout << std::endl;  // Move to the next line after each row
    }


    // For Number Pattern
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            std::cout <<j;  // Print numbers
        }
        std::cout << std::endl;  // Move to the next line after each row
    }

    return 0;
}
