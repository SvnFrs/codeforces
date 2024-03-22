#include <iostream>

using namespace std;

long long int n, ans = 0;

int main () {
    cin >> n;

    if (n % 2 == 0) {
        ans = n / 2;
    } else {
        ans = n / 2 - n;
    }

    cout << ans;
    return 0;
}