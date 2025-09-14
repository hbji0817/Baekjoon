#include <stdio.h>
#include <string.h>

int main() {
    char arr[5][16]; 
    int max_len = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%s", arr[i]);
        int len = strlen(arr[i]);
        if(len > max_len) max_len = len; 
    }

    for(int j = 0; j < max_len; j++) {
        for(int i = 0; i < 5; i++) {
            if(j < strlen(arr[i])) {
                printf("%c", arr[i][j]);
            }
        }
    }

    return 0;
}
