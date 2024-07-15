#include <iostream>
using namespace std;

class Rupee {
private:
    int amount;

public:
    Rupee(int a) : amount(a) {}

    operator int() const {
        return amount;
    }
};

int main() {
    Rupee r(10);
    int x = r;  // Calls operator int()
    cout << "Rupee as int: " << x << endl;
    return 0;
}
