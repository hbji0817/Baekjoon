#include <stdio.h>

int main () {
    int n;
    char a[101];
    int count = 0;  

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s", a);

        int alphabet[26] = {0}; 
        int is_group = 1;     
        char prev = 0;

        for (int j = 0; a[j] != '\0'; j++) {
            char ch = a[j];
            if (ch != prev) {             
                if (alphabet[ch - 'a'] == 1) {
                    is_group = 0; 
                    break;
                }
                alphabet[ch - 'a'] = 1; 
            }
            prev = ch; 
        }

        if (is_group == 1) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
