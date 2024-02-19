#include <iostream>
#include <array>
#include <numeric>


int main() 
{
 
    // Create a array of integers with a size of 10 elements
        std::array<int,10> arr;
         int sum ;

    // Use std::iota to fill the array with a range of values from 1 to 10
        std::iota(arr.begin(), arr.end(), 1);

    // Calculate the sum of the values in the array using std::accumulate
         sum = std::accumulate(arr.begin(), arr.end(), 0);

    // Print the contents of the array
        for (auto i : arr)
        {
            std::cout << i << " ";
        }

    // Print the sum of the values in the array
        std::cout << std::endl << "Sum = " << sum;

 
        return 0;
}