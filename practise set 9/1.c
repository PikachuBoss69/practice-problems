/*
Create a two-dimensional vector using structures in C
*/

#include <stdio.h>
struct vector
{
    int i;
    int j;
};

int main(){
    struct vector v={3,2};
    printf("your vector is : %di +%dj ",v.i,v.j);    
    return 0;
}