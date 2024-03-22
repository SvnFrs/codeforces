#include <iostream>

using namespace std;

int n, in, out, maxPeople = 0, current = 0;

int main () {
    cin >> n;

    while (n > 0) {
        cin >> out;
        current -= out;

        cin >> in;
        current += in;

        if (maxPeople < current) maxPeople = current;

        n--;
    }

    cout << maxPeople;

    return 0;
}