#include <stdio.h>

int main() {
    int a;
    scanf("%d\n", &a);
    
    for(int i = 1; i <= a; i++)
    {
        for(int j = 0; j< a-i; j++)
        {
            printf(" ");
        }
        for(int j = 0; j< 2*i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i < a; i++)
    {
        for(int j = 0; j< i; j++)
        {
            printf(" ");
        }
        for(int j = 0; j< 2*a - 1 - 2*i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;

}