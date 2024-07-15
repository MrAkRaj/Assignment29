#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(int r) : real(r), imag(0) {} // Constructor for int to Complex conversion

    void showData() {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    int x = 5;
    c1 = x;  // Calls Complex(int r) constructor
    c1.showData();
    return 0;
}
