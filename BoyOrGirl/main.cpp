#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int arr[26] = {0};
    
    for (int i = 0; i < str.length(); i++) {
        int index = str[i] - 'a';
        arr[index]++;
    }
    
    int numberOfDistinct = 0;

    for (int num : arr) {
        if (num > 0) numberOfDistinct++;
    }
    
    if (numberOfDistinct % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}