#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int num = 0;
    int num5 = N / 5;
    int num3;
    
    while (num5 >= 0) {
        if((N - num5*5)%3 ==
         0) {
            num3 = (N - num5*5)/3;
            break;
        }
        
        num5--;
    }
    
    num = num3 + num5;
    
    if (num5 < 0) 
        printf("-1");
    else
        printf("%d", num3 + num5);
    
    return 0;
}