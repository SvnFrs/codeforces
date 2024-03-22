#include <iostream>

using namespace std;

int n, h;

int main () {
    cin >> n >> h;

    int ans = 0;
    int temp;

    while (n > 0) {
        cin >> temp;
        if (temp > h)
            ans += 2;
        else
            ans++;
        n--;
    }

    cout << ans;

    return 0;
}