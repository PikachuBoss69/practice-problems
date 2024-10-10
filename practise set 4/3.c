// Write a program to sum first ten natural numbers using while loop.
#include<stdio.h>
int main(){
    int a=0 , b=1;
    
    while(b<=10){
        a=a+b;
        b++;
    }
    printf("The sum of first 10 natural numbers is : %d", a);


}