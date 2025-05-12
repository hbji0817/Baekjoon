#include <stdio.h>

int main(void) {
    char lines[100][102];
    int count = 0;

    for (int i = 0; i < 100; i++) {
        if (fgets(lines[i], sizeof(lines[i]), stdin) == NULL) {
            break;
        }
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%s", lines[i]);
    }

    return 0;
}