#include <iostream>
#include <cmath>

int  main ()
{
    int  x = 0;
auto fn = [](int x )->float {return std::pow(x, 2);};
// auto fn =[](int x )->int {return x*x;};
std::cout<<" please enter number to know its square value : ";
std::cin>> x;
std::cout<<"the square of the number you entered is " << fn(x);

    return 0;
}