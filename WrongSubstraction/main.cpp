#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int n, k;

int main () {
    cin >> n >> k;

    while (k > 0) {
        if (n % 10 != 0)
            n--;
        else
            n /= 10;

        k--;
    }

    cout << n;

    return 0;
}