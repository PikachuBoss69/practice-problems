// Write a program to calculate the factorial of a given number using a for loop
#include <stdio.h>
int main(){
    int fact=1 ,  no;
    for(no=6;no>=1;no--){
        fact=fact*no;
    }
    printf("The factorial of 6 is : \n6! = %d",fact);
    return 0;
}