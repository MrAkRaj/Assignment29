#include <iostream>
using namespace std;

class Dollar;

class Rupee {
private:
    int amount;

public:
    Rupee(int a) : amount(a) {}

    void display() {
        cout << "Rupee amount: " << amount << endl;
    }

    operator Dollar() const;
};

class Dollar {
private:
    int amount;

public:
    Dollar() : amount(0) {}
    Dollar(int a) : amount(a) {}

    void display() {
        cout << "Dollar amount: " << amount << endl;
    }

    Dollar(int rupee) : amount(rupee / 75) {}  // Assuming 1 Dollar = 75 Rupees
    operator Rupee() const {
        return Rupee(amount * 75);
    }
};

Rupee::operator Dollar() const {
    return Dollar(amount);
}

int main() {
    Rupee r(23);
    Dollar d = r;  // Rupee to Dollar conversion
    d.display();

    r = d;  // Dollar to Rupee conversion
    r.display();

    return 0;
}
