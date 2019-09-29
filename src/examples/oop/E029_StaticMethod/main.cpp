#include <iostream>

class mathUtil
{
public:
    static int doubleNumber(int n) { return n * 2; }
};

int main() {
    int n = 5;
    int doubleN = mathUtil::doubleNumber(n);

    std::cout << "n: " << n << std::endl;
    std::cout << "double n: " << doubleN << std::endl;

    return 0;
}