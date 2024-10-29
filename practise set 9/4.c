/*
 Write a program with a structure representing a complex number.
*/
#include <stdio.h>
struct vector
{
    int i;
    int j;
};

int main(){
    struct vector v={3,2};
    printf("your vector is : %d + %di ",v.i,v.j);    
    return 0;
}