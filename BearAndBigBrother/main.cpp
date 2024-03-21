#include <iostream>
#include <cmath>

using namespace std;

int a, b;

int main () {
    cin >> a >> b;

    int year = 0;
    int weightA = a;
    int weightB = b;

    while (weightA <= weightB) {
        weightA *= 3;
        weightB *= 2;
        year++;
    }

    cout << year;

    return 0;
}