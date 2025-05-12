#include <stdio.h>
#include <string.h>

int get(char ch) {
    switch(ch) {
        case 'A': case 'B': case 'C':
            return 3;
        case 'D': case 'E': case 'F':
            return 4;
        case 'G': case 'H': case 'I':
            return 5;
        case 'J': case 'K': case 'L':
            return 6;
        case 'M': case 'N': case 'O':
            return 7;
        case 'P': case 'Q': case 'R': case 'S':
            return 8;
        case 'T': case 'U': case 'V':
            return 9;
        case 'W': case 'X': case 'Y': case 'Z':
            return 10;
        default:
            return 0; 
    }
}

int main() {
    char input[20]; 
    
    int result = 0;
    int num;

    scanf("%s", input); 

    for (int i = 0; i < strlen(input); i++) {
        num = get(input[i]);
        result += num;
    }
    printf("%d",result);

    return 0;
    
}