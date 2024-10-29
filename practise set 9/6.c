//Write problem 4’s structure using ‘typedef’ keywords

#include <stdio.h>
typedef struct vector
{
    int i;
    int j;
}V;

int main(){
    V v={3,2};
    printf("your vector is : %d + %di ",v.i,v.j);    
    return 0;
}