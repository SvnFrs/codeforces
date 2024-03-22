#include <iostream>
#include <string>

using namespace std;

int n, anton = 0;
string str;

int main () {
    cin >> n >> str;

    for (char c : str) {
        if (c == 'A') anton++;
    }

    if (anton > n - anton)
        cout << "Anton";
    else if (anton == n - anton)
        cout << "Friendship";
    else
        cout << "Danik";

    return 0;
}