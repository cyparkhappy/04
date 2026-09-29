#include <stdio.h>

int main(void){
    int sec;
    printf("input the second :");
    scanf("%i", &sec);

    printf("the time is %d : %d\n", sec/60, sec%60);

    return 0;
}