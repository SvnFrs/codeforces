#include <iostream>

using namespace std;

int n, p, q, ans = 0;

int main () {
    cin >> n;

    while (n > 0) {
        cin >> p >> q;
        if (p + 2 <= q) ans++;
        n--;
    }

    cout << ans;

    return 0;
}