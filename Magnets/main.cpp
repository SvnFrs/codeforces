#include <iostream>

using namespace std;

int n, current, ans = 1, temp;

int main () {
    cin >> n >> current;

    while (n - 1 > 0) {
        cin >> temp;
        if (temp != current) {
            current = temp;
            ans++;
        }
        n--;
    }

    cout << ans;

    return 0;
}