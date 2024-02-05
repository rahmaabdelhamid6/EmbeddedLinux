#include <iostream>
#include <algorithm> 
#include <vector>
#include <valarray>

// void merge_two_arrays(int arr1[],int size1,int arr2[],int size2, int arr3[])
// {

//     std::merge (arr1, arr1+size1, arr2,arr2+size2 ,arr3 );
// }

int main() 
{
    // int array1[] = {1, 3, 5};
    // int size1 = sizeof(array1) / sizeof(array1[0]);

    // int array2[] = {2, 4, 6};
    // int size2 = sizeof(array2) / sizeof(array2[0]);
    //  int mergedSize = size1 + size2;
    // int mergedArray[mergedSize];
// merge_two_arrays(array1, array2, mergedArray);
// for (int i = 0; i < mergedSize; ++i) {
    //     std::cout << mergedArray[i] << " ";
    // }
    //  std::cout << std::endl;
    std::vector<int>arr1={1, 3, 5};
    std::vector<int>arr2={2, 4, 6};
    std::vector<int>mergedArray;
    
    std::merge (arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), std::back_inserter(mergedArray));
    std::cout << "Merged array: ";

     for (int i : mergedArray) {
        std::cout << i<< " ";
    }
    std::cout << std::endl;

    return 0;
}