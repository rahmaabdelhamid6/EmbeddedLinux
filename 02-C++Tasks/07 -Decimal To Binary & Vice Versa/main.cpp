#include <iostream>
#include <bitset>

std::string decimalToBinary(int decimal) {
    // Convert decimal to binary using std::bitset
    std::bitset<12> binary(decimal);
    return binary.to_string();
}

int binaryToDecimal(const std::string& binary) {
    // Convert binary to decimal using std::bitset
    std::bitset<12> bits(binary);
    return static_cast<int>(bits.to_ulong());
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    std::string binary = decimalToBinary(decimal);
    std::cout << "Binary representation: " << binary << std::endl;

    std::string binaryInput;
    std::cout << "Enter a binary number: ";
    std::cin >> binaryInput;

    int decimalResult = binaryToDecimal(binaryInput);
    std::cout << "Decimal representation: " << decimalResult << std::endl;

    return 0;
}