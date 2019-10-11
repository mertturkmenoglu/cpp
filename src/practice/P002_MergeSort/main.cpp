/**
 * Practice 002: Merge Sort implementation
 */

#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <memory>
#include <random>

template <typename T>
void merge_sort(T array[], int start, int end);

template <typename T>
void merge(T array[], int start, int mid, int end);

template <typename T>
void merge_sort(T array[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(array, start, mid);
        merge_sort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}

template <typename T>
void merge(T array[], int start, int mid, int end)
{
    // Size of merged array
    int n;
    n = end - start + 1;

    // Temporary array
    std::unique_ptr<T[]> tmp_arr = std::make_unique<T[]>(n);

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
    {
        tmp_arr[index++] = (array[i] < array[j]) ? array[i++] : array[j++];
    }

    // Append elements from first part to merged array if there is any
    while (i <= mid)
    {
        tmp_arr[index++] = array[i++];
    }

    // Append elements from second part to merged array if there is any
    while (j <= end)
    {
        tmp_arr[index++] = array[j++];
    }

    // Clone elements from temporary array to the original one
    for (i = start; i <= end; i++)
    {
        array[i] = tmp_arr[i - start];
    }
}

int main()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> random_int(0, RAND_MAX);
    std::uniform_real_distribution<double> random_double(0, RAND_MAX);

    std::array<int, 10> arr_int { };
    std::array<float, 10> arr_float { };

    for (int i = 0; i < 10; i++)
    {
        arr_float[i] = static_cast<float>(random_double(mt) / static_cast<double>(RAND_MAX));
        arr_int[i] = random_int(mt) % 10;
    }

    std::copy(arr_int.begin(), arr_int.end(), std::ostream_iterator<int>(std::cout, ", "));
    std::cout << std::endl;

    std::copy(arr_float.begin(), arr_float.end(), std::ostream_iterator<float>(std::cout, ", "));
    std::cout << std::endl;

    merge_sort(arr_int.data(), 0, 9);
    merge_sort(arr_float.data(), 0, 9);

    std::copy(arr_int.begin(), arr_int.end(), std::ostream_iterator<int>(std::cout, ", "));
    std::cout << std::endl;

    std::copy(arr_float.begin(), arr_float.end(), std::ostream_iterator<float>(std::cout, ", "));
    std::cout << std::endl;

    return 0;
}
