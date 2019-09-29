#include <iostream>

template<typename T = int, typename R = int>
class pairContainer
{
private:
    T fst;
    R snd;
public:
    pairContainer(const T& fst, const R& snd) : fst(fst), snd(snd) { }

    // Usage of auto return type deduction requires C++14 or higher
    [[nodiscard]] auto getPair() const { return std::make_pair(fst, snd); }
};

int main() {
    pairContainer p(1, 2);
    auto result1 = p.getPair();
    std::cout << "<" << result1.first << ", " << result1.second << ">" << std::endl;

    pairContainer<int, int> p2(2, 3);
    auto result2 = p2.getPair();
    std::cout << "<" << result2.first << ", " << result2.second << ">" << std::endl;

    pairContainer<float, int> p3(3.1f, 4);
    auto result3 = p3.getPair();
    std::cout << "<" << result3.first << ", " << result3.second << ">" << std::endl;

    return 0;
}