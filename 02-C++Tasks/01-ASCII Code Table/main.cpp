#include <iostream>
#include <iomanip>

int main() {
    std::cout << "ASCII Table" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << std::setw(8) << "Decimal" << std::setw(8) << "Octal" << std::setw(8) << "Hex" << std::setw(15) << "Character" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < 128; ++i) {
        if (i % 16 == 0)
            std::cout << std::endl;

        std::cout << std::setw(8) << i << std::setw(8) << std::oct << i << std::setw(8) << std::hex << i;
        std::cout << std::setw(10) << static_cast<char>(i) <<  std::dec <<std::endl;
    }

    return 0;
}

