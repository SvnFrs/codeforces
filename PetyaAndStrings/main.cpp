#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    
    int len = str1.length();
    
    for (int i = 0; i < len; i++) {
        int first = (int) tolower(str1[i]);
        int second = (int) tolower(str2[i]);
        
        if (first < second) {
            cout << -1;
            return 0;
        } else if (first > second) {
            cout << 1;
            return 0;
        }
    }
    
    cout << 0;
 
    return 0;
}