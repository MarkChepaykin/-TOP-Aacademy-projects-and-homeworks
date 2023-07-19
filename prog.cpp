#include "function.h"
#include <iostream>

int main() {
    const int SIZE = 5;
    DataType array[SIZE];

    fillArray(array, SIZE);
    std::cout << "Original Array: ";
    printArray(array, SIZE);

    DataType minValue = findMin(array, SIZE);
    std::cout << "Min Value: " << minValue << std::endl;

    DataType maxValue = findMax(array, SIZE);
    std::cout << "Max Value: " << maxValue << std::endl;

    sortArray(array, SIZE);
    std::cout << "Sorted Array: ";
    printArray(array, SIZE);

    int index = 2;
    DataType newValue = 100;
    editArray(array, index, newValue);
    std::cout << "Array after editing: ";
    printArray(array, SIZE);

    return 0;
}
