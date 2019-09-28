#include <iostream>

class vector2D {
private:
    int x;
    int y;
public:
    explicit vector2D(int x = 0, int y = 0) : x(x), y(y) { }

    [[nodiscard]] int getX() const {
        return x;
    }
};

int main() {
    vector2D v(3, 4);

    std::cout << "Via dot notation: " << v.getX() << std::endl;

    // Declare a member function pointer
    int (vector2D::* xPtr)() const = &vector2D::getX;

    int result = (v.*xPtr)();
    std::cout << "Via member function pointer: " << result << std::endl;

    return 0;
}