#include <iostream>
using namespace std;

class Item {
private:
    int a, b;

public:
    Item() : a(0), b(0) {}

    void showData() {
        cout << "Item: a=" << a << ", b=" << b << endl;
    }

    Item& operator=(const Product &p);
};

class Product {
private:
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    // Casting operator for Product to Item conversion
    operator Item() const {
        Item item;
        item.a = a;
        item.b = b;
        return item;
    }
};

Item& Item::operator=(const Product &p) {
    a = p.a;
    b = p.b;
    return *this;
}

int main() {
    Item i1;
    Product p1;
    p1.setData(3, 4);
    i1 = p1;  // Calls operator Item() conversion
    i1.showData();
    return 0;
}
