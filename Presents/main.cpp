#include <iostream>

using namespace std;

int n;

int main () {
    cin >> n;

    int gift[n + 1];
    gift[0] = 0;

    int receive[n + 1];
    receive[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> gift[i];
    }

    for (int i = 1; i <= n; i++) {
        receive[gift[i]] = i;
    }

    for (int i = 1; i <= n; i++) cout << receive[i] << " ";

    return 0;
}