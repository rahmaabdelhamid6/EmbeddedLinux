#include <iostream>
#include <algorithm> 
#include <valarray>
// void delet_num( std::valarray <int>array , int number, int& size)
// {
    
//     // Use std::remove to move the number to be deleted to the end of the array
//     int* newEnd = std::remove(std::begin(array), std::end (array), number);
//     // Calculate the new size of the array after removing the number
//     size = std::distance(std::begin(array), newEnd);
//     array.resize(size);
// }

//  int main()
// {
//      std::valarray <int>array = {5, 2, 9, 1, 7};
//      int number;
//     std::cout << "Enter the number to delete: ";
//     std::cin >> number;

//     int size = array.size();
//     delet_num(array, number, size);

//     // Call the deleteNumber function to delete the number from the array
//     // delet_num(array, number);

//     // Print the updated array
//     std::cout << "Array after deletion: ";
//     for (int i : array) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;
//     return 0;
// }



// void delet_num( int array[],int& size , int number)
// {
//     // Use std::remove to move the number to be deleted to the end of the array
//     int* newEnd = std::remove(array, array + size, number);
//     // Calculate the new size of the array after removing the number
//     size = std::distance(array, newEnd);
//     // size = newEnd - array;
// }

//  int main()
// {
//      int array[] = {5, 2, 9, 1, 7};
//      int number;
//     int size = sizeof(array) / sizeof(array[0]);
    
//     std::cout << "Enter the number to delete: ";
//     std::cin >> number;

//     // Call the deleteNumber function to delete the number from the array
//     delet_num(array, size, number);

//     // Print the updated array
//     std::cout << "Array after deletion: ";
//     for (int i = 0; i < size; ++i) {
//         std::cout << array[i] << " ";
//     }
//     std::cout << std::endl;
//     return 0;
// }