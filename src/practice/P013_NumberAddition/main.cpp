#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

bool find_pairs(const std::vector<int>& numbers, int k);

int main()
{
    std::vector<int> numbers = {10, 15, 3, 7};
    int k = 17;

    bool result = find_pairs(numbers, k);
    std::cout << std::boolalpha << result << std::endl;

    return 0;
}

bool find_pairs(const std::vector<int>& numbers, int k)
{
    std::set<int> passed = {};

    for (const int& e : numbers)
    {
        if (passed.find(k-e)!=passed.end())
        {
            return true;
        }
        passed.insert(e);
    }

    return true;
}