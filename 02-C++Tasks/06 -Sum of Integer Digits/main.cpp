#include <iostream>
#include <string>

int sumDigits(int number) {
    int sum = 0;
    std::string strNum = std::to_string(number);
    for (char digit : strNum) {
        sum += digit - '0';
    }

    return sum;
}

int main() {
    int number;
    std::cout << "Enter an integer number: ";
    std::cin >> number;

    int sum = sumDigits(number);

    std::cout << "The sum of the digits is: " << sum << std::endl;

    return 0;
}