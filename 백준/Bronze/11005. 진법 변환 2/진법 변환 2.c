#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int a;
    char arr[101];
    int b;
    char num;
    
    scanf("%d %d", &a, &b);
    
    int i = 0;
    
    while(a > 0) {
        num = (a % b);
        
        if(num >= 10) {
            num = 'A' + (num - 10);
        } else {
            num = '0' + num;
        }

        
        arr[i] = num;
            
        i++;
        
        a = a / b;
    }
    arr[i] = '\0';
    
    int m = strlen(arr);
    
    for(int j = 0; j < m / 2; j++) {
        char temp = arr[j];
        arr[j] = arr[m - j -1];
        arr[m - j - 1] = temp;
    }
    
    printf("%s", arr);
    
    return 0;
}