/*Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. */



//this program is not working , please find its problem
#include <stdio.h>

int main(){
    float simple_interest , principle_value , time , Anual_rate_interest;
    printf("Enter the principle value : ");
    scanf("%f", &principle_value);
    printf("Enter the time for which principle is borrowed : ");
    scanf("%f", &time);
    printf("Enter the rate of interest : ");
    scanf("%f",&Anual_rate_interest);
    simple_interest = (principle_value * time * Anual_rate_interest)/100;
    printf("Your simple interest is %f",simple_interest);
    return 0;

}