#include <iostream>
#include <string>

using namespace std;

string s, t;

int main () {
    cin >> s >> t;

    int len = s.size();

    string ans = "YES";

    for (int i = 0; i < len; i++) {
        if (s[i] != t[len - 1 - i]) ans = "NO";
    }

    cout << ans;

    return 0;
}