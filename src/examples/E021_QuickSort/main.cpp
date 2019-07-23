/**
 * Generic quickSort implementation
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <string>
#include <cmath>

template <class T>
int partition(T array[], int begin, int end);

template <class T>
void quickSort(T array[], int begin = 0, int end = 0);

template <class T>
void printArray(T array[], int begin = 0, int end = 0);

template <class T>
void quickSort(T array[], int begin, int end) {
    if (begin < end) {
        int partitionIndex = partition(array, begin, end);
        quickSort(array, begin, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, end);
    }
}

template <class T>
int partition(T array[], int begin, int end) {
	T pivot = array[end];
	int i = begin - 1;

	for (int j = begin; j <= end-1; j++) {
		if (array[j] <= pivot) {
			i++;
            std::swap(array[i], array[j]);
		}
	}

    i++;
    std::swap(array[i], array[end]);

	return i;
}

template <class T>
void printArray(T array[], int begin, int end) {
    for(int i = begin; i < end; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int array1[] = {5, 2, 6, 1, 6, 0, 9, 3, 4};
    double array2[] = {3.14, 1.1, 0.3, -2, 9.9};

    printArray(array1, 0, 9);
    printArray(array2, 0, 5);

    quickSort(array1, 0, 8);
    quickSort(array2, 0, 4);

    printArray(array1, 0, 9);
    printArray(array2, 0, 5);

    return 0;
}