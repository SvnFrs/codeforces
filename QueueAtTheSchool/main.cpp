#include <iostream>
#include <string>

using namespace std;

int n, t;
string str;

int main () {
    cin >> n >> t;
    cin >> str;

    while (t > 0) {
        for (int i = 0; i < n; i++) {
            if(str[i] == 'B' && str[i + 1] == 'G') {
                str[i] = 'G';
                str[i + 1] = 'B';
                i++;
            }
        }
        t--;
    }

    cout << str;

    return 0;
}