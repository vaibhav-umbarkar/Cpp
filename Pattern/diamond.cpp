#include <iostream>  // Header file for input/output stream

int main() {
    int rows = 5;  // Number of rows for the top half of the diamond

    // Top half of the diamond
    for(int i = 1; i <= rows; i++) {
        // Print leading spaces
        for(int k = rows; k >= i; k--) {
            std::cout << " ";
        }
        // Print asterisks with spaces
        for(int j = 1; j <= i; j++) {
            std::cout << " *";
        }
        // Move to the next line after each row
        std::cout << std::endl;
    }

    // Bottom half of the diamond
    for(int i = 1; i <= rows; i++) {
        // Print leading spaces
        for(int k = 1; k <= i; k++) {
            std::cout << " ";
        }
        // Print asterisks with spaces
        for(int j = rows; j >= i; j--) {
            std::cout << " *";
        }
        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}
