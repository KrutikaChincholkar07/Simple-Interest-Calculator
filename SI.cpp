#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, SI;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest: ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    SI = (principal * rate * time) / 100;

    cout << "Simple Interest = " << SI;

    return 0;
}
