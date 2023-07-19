#include "function.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void fillArrayInt(int array[], int size) {
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;  // заполнение случайными значениями от 0 до 99
    }
}

void fillArrayDouble(double array[], int size) {
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < size; ++i) {
        array[i] = (rand() % 10000) / 100.0;  // заполнение случайными значениями от 0 до 99.99
    }
}

void fillArrayChar(char array[], int size) {
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < size; ++i) {
        array[i] = static_cast<char>((rand() % 26) + 97);  // заполнение случайными буквами от a до z
    }
}

void printArrayInt(const int array[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void printArrayDouble(const double array[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void printArrayChar(const char array[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int findMinInt(const int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

double findMinDouble(const double array[], int size) {
    double min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

char findMinChar(const char array[], int size) {
    char min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int findMaxInt(const int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

double findMaxDouble(const double array[], int size) {
    double max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

char findMaxChar(const char array[], int size) {
    char max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void sortArrayInt(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sortArrayDouble(double array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                double temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sortArrayChar(char array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void editArrayInt(int array[], int index, int newValue) {
    array[index] = newValue;
}

void editArrayDouble(double array[], int index, double newValue) {
    array[index] = newValue;
}

void editArrayChar(char array[], int index, char newValue) {
    array[index] = newValue;
}
