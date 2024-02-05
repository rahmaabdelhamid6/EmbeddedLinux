#include <iostream>
#include <valarray> 

bool Find_Num(std::valarray<int>arr,int number)
{
    return std::find(std::begin(arr), std::end(arr),number);
}
// bool Find_Num(const std::valarray<int>& arr, int number)
// {
//     auto searchnum = std::find(std::begin(arr), std::end(arr),number);
//     return (searchnum != std::end(arr));
// }

int main ()
{
    int num;
    bool found;
    std::valarray<int> arr ={1,8,9,4,11,45,22,66};
    std::cout<<"please enter a number to search : "<<std::endl;
    std::cin>>num;
    
    found=Find_Num(arr,num);
    if (found)
    {
        std::cout<<"number is found "<<std::endl;
    }
    else
    {
        std::cout<<"number isn't found "<<std::endl;
    }
        
    
    return 0;
}