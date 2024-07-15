#include <iostream>
using namespace std;

class Minute;

class Time {
private:
    int hours, minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    void display() {
        cout << "Time: " << hours << " hours, " << minutes << " minutes" << endl;
    }

    // Conversion operator from Time to Minute
    operator Minute() const;
};

class Minute {
private:
    int minutes;

public:
    Minute() : minutes(0) {}
    Minute(int m) : minutes(m) {}

    void display() {
        cout << "Minutes: " << minutes << endl;
    }

    // Conversion from Time to Minute
    Minute Time::operator()() const {
        return Minute(hours * 60 + minutes);
    }
};

Time::operator Minute() const {
    return Minute(hours * 60 + minutes);
}

int main() {
    Time t1(2, 30);
    t1.display();
    Minute m1;
    m1 = t1;  // Calls operator Minute() conversion
    m1.display();
    return 0;
}
