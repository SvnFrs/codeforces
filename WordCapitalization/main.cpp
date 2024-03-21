#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    str[0] = str[0] - 'a' >= 0 ? str[0] - 32 : str[0];
    
    cout << str;

    return 0;
}