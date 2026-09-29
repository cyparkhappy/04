#include <stdio.h>

int main(void){
    int year;
    printf("input year :");
    scanf("%i", &year);


    printf("is the year %i the leap year? : %i", year, (year%400==0) || ((year%4==0)&&(year%100 !=0)) );

    return 0;
}