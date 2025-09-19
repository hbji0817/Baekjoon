#include <stdio.h>

int main() {
    int n; // 13
    scanf("%d", &n); 
    
    n -= 1; // 12
    int i;
    
    for(i = 1; n > 0; i++) {
        n = n - (6 * i);
    }
    
    printf("%d", i);
    
    return 0;
}