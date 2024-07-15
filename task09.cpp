#include <iostream>
using namespace std;

class Dollar {
private:
    int amount;

public:
    Dollar() : amount(0) {}

    Dollar(int a) : amount(a) {}

    Dollar& operator=(int a) {
        amount = a;
        return *this;
    }

    void display() {
        cout << "Dollar amount: " << amount << endl;
    }
};

int main() {
    int x = 50;
    Dollar d;
    d = x;  // Calls operator=(int a)
    d.display();
    return 0;
}
