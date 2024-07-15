#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int sec) {
        hours = sec / 3600;
        minutes = (sec % 3600) / 60;
        seconds = sec % 60;
    }

    void display() {
        cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
};

int main() {
    int duration;
    cout << "Enter time duration in seconds: ";
    cin >> duration;
    Time t1 = duration;  // Calls Time(int sec) constructor
    t1.display();
    return 0;
}
