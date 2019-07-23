/**
 * Practice 002: Merge Sort implementation
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <cstdlib>
#include <iomanip>

template<class T>
void mergeSort(T array[], int start, int end);

template<class T>
void merge(T array[], int start, int mid, int end);


template<class T>
void mergeSort(T array[], int start, int end)
{
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}

template<class T>
void merge(T array[], int start, int mid, int end)
{
    // Size of merged array
    int n;
    n = end - start + 1;

    // Temporary array
    T* tempArray = new T[n];
    
    // i is index of the first part
    int i = start;

    // j is index of the second part
    int j = mid + 1;

    // Index of the merged array
    int index = 0;

    /*
     * Iterate over two parts of the array.
     * Compare two elements and append the smaller one
     * to merged array.
     */
    while ((i <= mid) && (j <= end))
        tempArray[index++] = (array[i] < array[j]) ? array[i++] : array[j++];

    // Append elements from first part to merged array if there is any
    while (i <= mid)
        tempArray[index++] = array[i++];

    // Append elements from second part to merged array if there is any
    while (j <= end)
        tempArray[index++] = array[j++];

    // Clone elements from temporary array to the original one
    for (i = start; i <= end; i++)
        array[i] = tempArray[i - start];
    
    delete[] tempArray;
}

int main() {
    srand(time(nullptr));

    int arr_int[10];
    float arr_float[10];

    for (int i = 0; i < 10; i++) {
        arr_float[i] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

        arr_int[i] = rand() % 10;
    }

    std::for_each(std::begin(arr_int), std::end(arr_int), [](int num){
        std::cout << num << "\t";
    });

    std::cout << std::endl;

    std::for_each(std::begin(arr_float), std::end(arr_float), [](float num){
        std::cout << std::setprecision(2) << num << "\t";
    });

    mergeSort(arr_int, 0, 9);
    mergeSort(arr_float, 0, 9);

    std::cout << std::endl;

    std::for_each(std::begin(arr_int), std::end(arr_int), [](int num){
        std::cout << num << "\t";
    });

    std::cout << std::endl;

    std::for_each(std::begin(arr_float), std::end(arr_float), [](float num){
        std::cout << std::setprecision(2) << num << "\t";
    });

    std::cout << std::endl;
    return 0;
}
