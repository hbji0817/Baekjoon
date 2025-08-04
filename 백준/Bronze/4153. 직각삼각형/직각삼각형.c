#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    while(1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a ==  0 && b ==  0 && c ==  0){
            break;
        }
        if(a > 0 && b > 0 && c > 0 && c > a && c > b){
            if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
        else if(a > 0 && b > 0 && c > 0 && b > a && b > c){
            if(pow(a, 2) + pow(c, 2) == pow(b, 2)){
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
        
        else if(a > 0 && b > 0 && c > 0 && a > b && a > c){
            if(pow(b, 2) + pow(c, 2) == pow(a, 2)){
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
        else {
            printf("wrong\n");
        }
        
    }

    return 0;
}