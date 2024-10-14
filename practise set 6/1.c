/*
Write a program to print the address of a variable. Use this address to get the 
value of the variable
*/
#include <stdio.h>

int main(){
    int i= 34;
    printf("the address of i is :%p\n",&i);
    printf("the vaule of the address at %p is : %d",&i,*(&i));

    return 0;
}