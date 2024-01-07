/*
 *  Program to print the multiplication table.
 */
#include <iostream>
#include <iomanip>

int main() {
    // Array representing tables to print multiplication for
    int tables[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12};

    // Iterate through each table
    for(int n : tables) {
        // Print multiplication table for the current number
        for(int i = 1; i <= 12; i++) {
            // Format and print each multiplication entry
            std::cout << std::setw(2) << n << std::setw(4) <<" * " << std::setw(2) << i << " = " << std::setw(3) << n * i << std::endl;
        }
        // Separator line for clarity between tables
        std::cout << "------------------------------" << std::endl;
    }

    return 0;
}