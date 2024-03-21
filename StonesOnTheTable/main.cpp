#include <iostream>
#include <string>

using namespace std;

int n, ans = 0;
string str;

int main () {
    cin >> n >> str;
    char current = str[0];
    for (int i = 1; i < n; i++) {
        if (str[i] == current) {
            ans++;
        } else {
            current = str[i];
        }
    }

    cout << ans;
    return 0;
}