#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    
    int arr[a][b];
    
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int x;
    
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            scanf("%d", &x);
            arr[i][j] += x;
        }
    }
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}