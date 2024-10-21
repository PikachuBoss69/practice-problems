/*
. Write a program to create an array of 10 integers and store multiplication table of 
5 in it. 
*/
#include <stdio.h>

int main(){
    int multiply[10],i,j=1,t=1;
    for (i=0;i<10;i++){
        multiply[i]=5*j;
        j++;    
    }
    for (i = 0; i < 10; i++)
    {
        printf("5 x %d = %d\n",t,multiply[i]);
        t++;
    }
    
    return 0;
}