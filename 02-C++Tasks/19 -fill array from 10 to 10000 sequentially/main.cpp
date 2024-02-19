#include <iostream>
#include "array"   
#include "numeric"

int main ()
{
    std::array <int,991> arr;
    std::iota(arr.begin(), arr.end() ,10);
    for (auto i : arr)
    {
        std::cout<<i<<",";
    }
    std::cout<<std::endl;
    return 0;
}