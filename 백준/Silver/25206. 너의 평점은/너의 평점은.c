#include <stdio.h>

int main() {
    char subject[51];
    float time;
    char score[3];
    float total = 0;
    int num = 0;
    
    for(int i = 0; i < 20; i++) {
        scanf("%s %f %s", subject, &time, score);
        
        if(score[0] == 'P') continue;
        if(score[0] == 'A') {
            if(score[1] == '+') {
                total += 4.5 * time;
                num += time;
            } else {
                total += 4.0 * time;
                num += time;
            }
        }
        if(score[0] == 'B') {
            if(score[1] == '+') {
                total += 3.5 * time;
                num += time;
            } else {
                total += 3.0 * time;
                num += time;
            }
        }
        if(score[0] == 'C') {
            if(score[1] == '+') {
                total += 2.5 * time;
                num += time;
            } else {
                total += 2.0 * time;
                num += time;
            }
        }
        if(score[0] == 'D') {
            if(score[1] == '+') {
                total += 1.5 * time;
                num += time;
            } else {
                total += 1.0 * time;
                num += time;
            }
        }
        if(score[0] == 'F') {
            num += time;
        }  
        
    }
    total = total / num;
        
    printf("%.6f", total);
        
    return 0;
}
