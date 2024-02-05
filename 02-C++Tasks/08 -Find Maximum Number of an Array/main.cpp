#include <iostream>
#include <algorithm>
#include <valarray> 

// int Max_Num(int arr[], int size)
// {
//     return *std::max_element(arr,arr+size);
// }
int Max_Num (std::valarray<int>arr1)
{
    return *std::max_element(std::begin(arr1),std::end(arr1));
}
int main ()
{
    int maxnum;
    // int arr [8] = {1,8,9,4,11,45,22,66};
    std::valarray<int> arr = {1,8,9,4,11,45,22,66};
    maxnum = Max_Num( arr);
    std::cout<<" the max number is : " << maxnum << std::endl;

    return 0;
}