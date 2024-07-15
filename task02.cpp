#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    int getReal() const {
        return real;
    }

    // Conversion operator to int
    operator int() const {
        return real;
    }
};

int main() {
    Complex c1;
    c1.setData(3, 4);
    int x;
    x = c1;  // Calls operator int()
    cout << "Real part as int: " << x << endl;
    return 0;
}
