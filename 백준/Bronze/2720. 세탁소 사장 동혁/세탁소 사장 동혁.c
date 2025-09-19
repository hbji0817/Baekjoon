#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    
    
    for(int i= 0; i < n ; i++) {
        int change;
        scanf("%d", &change);
        
        int a = 0, b = 0, c = 0, d = 0;
        
        while(change >= 25)
        {
            change -= 25;
            a++;
        }
        while(change >= 10)
        {
            change -= 10;
            b++;
        }
        while(change >= 5)
        {
            change -= 5;
            c++;
        }
        while(change >= 1)
        {
            change -= 1;
            d++;
        }
        
        printf("%d %d %d %d\n", a ,b , c, d);
        
        
    }
    
    return 0;
}

