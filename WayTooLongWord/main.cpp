#include <iostream>
#include <string>
using namespace std;

int main()
{
    //test 123
    int n;
    cin >> n;
    string str = "";
    
    while (n > 0) {
        cin >> str;
        if (str.length() <= 10) {
            cout << str << endl;
        } else {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        }
        n--;
    }

    return 0;
}
