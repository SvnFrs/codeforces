#include <iostream>
#include <string>

using namespace std;

long long int n;

int main () {
    cin >> n;

    int lucky = 0;

    while (n > 0) {
        if (n % 10 == 4 || n % 10 == 7) lucky++;
        n /= 10;
    }

    if (lucky == 4 || lucky == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}