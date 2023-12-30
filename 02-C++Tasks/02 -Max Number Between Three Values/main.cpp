#include <iostream>
#include <algorithm>
 int max_num(int arr[], int size)
{
    // auto max = std::max_element(arr,arr+size);
    return *std::max_element(arr,arr+size);
}
int main ()
{
    
    // Using variables to find the maximum value
    int a=10,b=20,c=35;
    std::cout <<"max value in a,b,c: " << std::max({a,b,c})<< std::endl;


    // int maxnum;
    int arr [8]={1,8,9,4,77,45,22,66};
    // maxnum=max_num( arr,8);
    std::cout<<" the max number is :"<<max_num( arr,8)<<std::endl; 
    //or 
    std::cout <<"max value in array: " << *(std::max_element(std::begin(arr),std::end(arr))) << std::endl;


    return 0;
}