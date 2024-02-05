#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
void sortArray(std::array<int,10>& arr, bool ascending)
{
    std::sort(arr.begin(), arr.end(), [ascending](int x , int y){
        return ascending? x<y: x>y;
    });
}

// auto sort_descending = [](std::array<int, 10>& arr) {
//     std::sort(arr.begin(), arr.end(), [](int a, int b) {
//         return a > b;
//     });
// };

// auto sort_ascending = [](std::array<int, 10>& arr) {
//     std::sort(arr.begin(), arr.end(), [](int a, int b) {
//         return a < b;
//     });
// };

int main ()
{
    // std::array<int, 10> arr = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
    // sort_descending(arr);

    // for(int num : arr)
    // {
    //     std::cout<<num<<" ";    
    // }
    // std::cout<<"\n";
    // sort_ascending(arr);
    // for(int num : arr)
    // {
    //     std::cout<<num<<" ";    
    // }
    // std::cout<<"\n";

    std::array<int, 10> arr = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
    sortArray(arr, true);

    std::cout << "Sorted in ascending order: ";
    for (const int& num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    sortArray(arr, false);

    std::cout << "Sorted in descending order: ";
    for (const int& num : arr) {
        std::cout << num << " ";
    }

    return 0;
}