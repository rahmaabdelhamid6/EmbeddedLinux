#include <iostream>
#include <cctype>

int main ()
{
    char  InputChar;
std::cout<<"Please enter a charachter to check if it a digit or no "<<std::endl;
std::cin>> InputChar;
if (std::isdigit (InputChar))
{
    std::cout<<"it's a digit"<<std::endl;
}
else 
{
    std::cout<<"it is not a digit"<<std::endl;
}
    return 0;
}