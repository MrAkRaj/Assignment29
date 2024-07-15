#include <iostream>
using namespace std;

class Product {
private:
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    int getA() const { return a; }
    int getB() const { return b; }
};

class Item {
private:
    int a, b;

public:
    Item() : a(0), b(0) {}

    // Constructor for Product to Item conversion
    Item(const Product &p) {
        a = p.getA();
        b = p.getB();
    }
};

int main() {
    Item i1;
    Product p1;
    p1.setData(3, 4);
    i1 = p1;  // Calls Item(const Product &p) constructor
    return 0;
}
