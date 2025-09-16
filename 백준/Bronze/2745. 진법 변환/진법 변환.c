#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char arr[101];
    int b, m, sum = 0;
    
    scanf("%s %d", arr, &b);
    
    m = strlen(arr);
    for (int i = 0; i < m; i++) {
        int val;
        if (arr[i] >= '0' && arr[i] <= '9') {
            val = (arr[i] - '0') * (int)pow(b, m - i - 1);
        } else {
            val = (arr[i] - 'A' + 10) * (int)pow(b, m - i - 1);
        }
        sum += val;
    }
    
    printf("%d", sum);
    
    return 0;
}
