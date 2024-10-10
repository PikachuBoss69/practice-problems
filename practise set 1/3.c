/* Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit). */
#include <stdio.h>

int main(){
  float celcius , fehrenheit;
  printf("Enter the temperature in celcius: ");
  scanf("%f", &celcius);
  fehrenheit = (celcius * 9/5) + 32;
  printf("The temperature in fehrenheit is: %f", fehrenheit);
  return 0;
    
    
}