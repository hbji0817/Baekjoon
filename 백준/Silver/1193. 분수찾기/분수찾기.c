#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int line = 1;   
    int count = 0;  

    while (n > line) {
        n -= line;  
        line++;
    }

    if (line % 2 == 1) {
        printf("%d/%d\n", line - n + 1, n);
    } 
    else {
        printf("%d/%d\n", n, line - n + 1);
    }

    return 0;
}
