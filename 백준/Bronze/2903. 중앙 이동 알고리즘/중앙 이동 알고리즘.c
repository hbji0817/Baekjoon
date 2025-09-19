#include <stdio.h>

int main() {
    int a = 2, n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        a = 2*a - 1;
    }
    
    printf("%d", a * a);
    
    return 0;
}
    
     
    
    