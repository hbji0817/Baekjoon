#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    scanf("%s", word);

    int count = 0;
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        
        if (i + 2 < len && word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '=') {
            count++;
            i += 2;
        }
        else if (i + 1 < len) {
            if (word[i] == 'c' && (word[i+1] == '=' || word[i+1] == '-')) {
                count++;
                i++;
            } else if (word[i] == 'd' && word[i+1] == '-') {
                count++;
                i++;
            } else if (word[i] == 'l' && word[i+1] == 'j') {
                count++;
                i++;
            } else if (word[i] == 'n' && word[i+1] == 'j') {
                count++;
                i++;
            } else if (word[i] == 's' && word[i+1] == '=') {
                count++;
                i++;
            } else if (word[i] == 'z' && word[i+1] == '=') {
                count++;
                i++;
            }
            else {
                count++;
            }
        }
        else {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}