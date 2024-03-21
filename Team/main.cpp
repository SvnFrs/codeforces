#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    
    int p1, p2, p3;
    
    int ans = 0;
    
    while (n > 0) {
        scanf("%d %d %d", &p1, &p2, &p3);
        
        if (p1 + p2 + p3 >= 2) ans++;
        
        n--;
    }
    
    printf("%d", ans);
    return 0;
}