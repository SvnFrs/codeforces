#include <bits/stdc++.h>

using namespace std;
// helo
int n, k, temp, value, ans = 0;
vector<int> arr;

int main () {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    value = arr[k - 1];

    for (int v : arr) {
        if (v > 0 && v >= value)
            ans++;
    }

    cout << ans;
    return 0;
}