#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int x = 0;
    
    string statement;

    while(n > 0) {
        cin >> statement;
        
        if (statement == "++X" || statement == "X++") x++;
        
        if (statement == "--X" || statement == "X--") x--;
        
        n--;
    }
    
    cout << x;
    
    return 0;
}