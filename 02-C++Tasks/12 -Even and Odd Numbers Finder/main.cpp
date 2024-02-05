#include <iostream>
#include <vector>
#include <valarray>
#include <algorithm>

void findEvenOdd(std::valarray<int> arr, int size, std::vector<int>& evenNumbers, std::vector<int>& oddNumbers)
 {
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            evenNumbers.push_back(arr[i]);
        } else {
            oddNumbers.push_back(arr[i]);
        }
    }
}

int main() {
    std::valarray<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int size = arr.size();

    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;

    findEvenOdd(arr, arr.size(), evenNumbers, oddNumbers);

    std::cout << "Even numbers: ";
    for (int num : evenNumbers) 
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Odd numbers: ";
    for (int num : oddNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}