#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int arr[4] = {0};
    
    for (int i = 0; i < str.length(); i = i + 2) {
        int index = str[i] - '0';
        arr[index]++;
    }

    string ans = "";

    for (int i = 1; i <= 3; i++) {
        while (arr[i] > 0) {
            ans += to_string(i) + "+";
            arr[i]--;
        }
    }
    
    ans = ans.substr(0, str.length());
    cout << ans;

    return 0;
}