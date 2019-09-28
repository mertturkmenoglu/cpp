class vector2D {
public:
    mutable int x;
    int y;

    explicit vector2D(int x = 0, int y = 0) : x(x), y(y) { }
};

int main() {
    // v is a constant object
    const vector2D v;

    // We can alter its mutable fields
    v.x = 5;

    // But we can not alter its other fields
    // v.y = 4;

    return 0;
}