#include <iostream>
#include <array>

bool isVowel(char letter)
{
    std::array<char,10> vowels = {'a', 'e', 'i', 'o', 'u'};
// Convert input to lowercase for case-insensitive comparison
    letter = std::tolower(letter);
    for (char vowel : vowels) {
        if (letter == vowel) {
            return true;
        
        }
    }
    return false;
}
int main ()
{
    char letter ;
    std::cout<<"please enter the letter to check if it's a vowel or no"<<std::endl;
    std::cin >> letter;

    if (isVowel(letter)) {
        std::cout << "It's a vowel character." << std::endl;
    } else {
        std::cout << "It isn't a vowel character." << std::endl;
    }
    return 0;
}