//Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>

int temp(int C){
    int  F;
    F = (C * 9/5) + 32;
    return F;    
}

int main(){
    int celcius;
    printf("Enter the temp in celcius : ");
    scanf("%d",&celcius);
    int Fehrenheit =temp(celcius);
    printf("the temperature in Fehrenheit is : %d",Fehrenheit);

    return 0;
}