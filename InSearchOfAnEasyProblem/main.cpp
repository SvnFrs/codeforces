#include <iostream>

using namespace std;

int n, temp;

int main () {
    cin >> n;

    while (n > 0) {
        cin >> temp;
        if (temp == 1) {
            cout << "HARD";
            return 0;
        }
        n--;
    }

    cout << "EASY";

    return 0;
}