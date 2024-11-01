/*
. Write a program to dynamically create an array of size 6 capable of storing 6 
integers
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=6;
    int* pointer;
    pointer=(int*)malloc(n*sizeof(int));
    pointer[0]=37;
    pointer[1]=32;
    pointer[2]=54;
    pointer[3]=31;
    pointer[4]=52;
    pointer[5]=42;

    printf("%d\n",pointer[0]);
    printf("%d\n",pointer[1]);
    printf("%d\n",pointer[2]);
    printf("%d\n",pointer[3]);
    printf("%d\n",pointer[4]);
    printf("%d\n",pointer[5]);    

    return 0;
}