/*
Write a program to print the value of a variable i by using “pointer to pointer” type 
of variable
*/

#include <stdio.h>

int main(){
    int i=6;
    int* pointer1 = &i;
    int**pointer2 = &pointer1;
    printf("Value of i is %d",*(*pointer2));
    return 0;
}



