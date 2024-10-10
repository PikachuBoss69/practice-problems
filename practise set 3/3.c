/*
 Write a program to find whether a year entered by the user is a leap year or not. 
Take year as an input from the user
*/

#include <stdio.h>
int main(){
    int year , leap1 , leap2;
    float leap  ;
    printf("Enter the year : ");
    scanf("%d",&year);
    leap = year % 4;
    if (leap == 0){
        leap1 = year%100;
        leap2 = year%400;
        if (leap1==0 && leap2 != 0 ){
            printf("year %d is not leap year",year);
        }
        else{
            printf("Year %d is a leap year",year);
        }  

    }
    else{
        printf("year %d is not leap year",year);
    }
    return 0;

 
}