#include <memory>
#include <iostream>

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    int n;

    std::cout << "How many elements: " << std::endl;
    std::cin >> n;

    std::unique_ptr<int[]> arr = std::make_unique<int[]>(n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    print_array(arr.get(), n);

    return 0;
}