#include <iostream>
#include "valarray"
// #include "array"   //d afdl 
#include "algorithm"


int main ()
{
    // std::array <int,5> arr1;
    int size;
    std::valarray <int> arr1(size);
    bool iseven=true;
    
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    //array
    // std::cout<<"please enter an array to check if it is an even array or not "<<std::endl;
    //valarray
    std::cout<<"please enter the number in the array seperated with  (,) to check if it is an even array or not "<<std::endl;
    // std::cin >> arr1;
    for (auto i = 0; i < arr1.size(); ++i)
    {
        std::cin >> arr1[i];
    }
    //array
    // if (std::all_of(arr1.begin(), arr1.end(), [](int element) { return element % 2 == 0; }))
    //valarray
    if (std::all_of(std::begin(arr1), std::end(arr1), [](int element) { return element % 2 == 0; }))
    {
        std::cout<<"it's an even array"<<std::endl;
    }
    else
    {
        std::cout<<"it's not even array"<<std::endl;
    }
    return 0;
}