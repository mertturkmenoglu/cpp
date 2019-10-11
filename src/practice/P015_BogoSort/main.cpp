#include <algorithm>
#include <array>
#include <chrono>
#include <iostream>
#include <iterator>
#include <random>

bool is_sorted(std::vector<int>& v);
void bogo_sort(std::vector<int>& v);

int main()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> random_int(0, 10);

    int n = 7;
    std::vector<int> vector(n);

    for (int i = 0; i < n; i++)
    {
        vector[i] = random_int(mt) % n;
    }

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl << "--------" << std::endl;

    bogo_sort(vector);

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}

void bogo_sort(std::vector<int>& v)
{
    while (!is_sorted(v))
    {
        std::shuffle(v.begin(), v.end(),
                std::default_random_engine(std::chrono::system_clock::now().time_since_epoch().count()));
    }
}

bool is_sorted(std::vector<int>& v)
{
    for (unsigned long i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
        {
            return false;
        }
    }

    return true;
}