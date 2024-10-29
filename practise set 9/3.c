/*
Write a program to illustrate the use of arrow operator → in C
*/

#include <stdio.h>

typedef struct arrow
{
    int i;
    int j;
}arr;

int main(){
    arr c;
    arr* ptr = &c;
    /*
    (*ptr).i=23;  //can use this or can use the arrow operator shown below
    (*ptr).j=56;
    */
    ptr->i=65;
    ptr->j=67;
    printf("The values in structure c is : { %d , %d }",ptr->i,ptr->j);
    return 0;
}
