#include <iostream>
using namespace std;

class Invent2;

class Invent1 {
private:
    int x, y;

public:
    Invent1(int a, int b) : x(a), y(b) {}

    operator float() const {
        return x + y * 0.1;
    }

    operator Invent2() const;
};

class Invent2 {
private:
    int x, y;

public:
    Invent2() : x(0), y(0) {}

    Invent2(int a, int b) : x(a), y(b) {}

    void display() {
        cout << "Invent2: x=" << x << ", y=" << y << endl;
    }

    // Conversion from Invent1 to Invent2
    Invent2 Invent1::operator()() const {
        return Invent2(x, y);
    }
};

int main() {
    Invent1 s1(4, 5);
    Invent2 d1;
    float tv = s1;  // Convert Invent1 to float
    d1 = s1;        // Convert Invent1 to Invent2
    cout << "Converted float value: " << tv << endl;
    d1.display();
    return 0;
}
