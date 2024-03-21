#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string str;
int upper = 0, lower = 0;

int main () {
    cin >> str;
    for (char c : str) {
        if (c >= 97 && c <= 122)
            lower++;
        else
            upper++;
    }

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 97 && str[i] <= 122 && upper > lower) str[i] -= 32;
        if (str[i] >= 65 && str[i] <= 90 && upper <= lower) str[i] += 32;
    }

    cout << str;

    return 0;
}