// Write a function and pass the value by reference
#include <stdio.h>

int sum(int* a, int* b){
    return *a + *b;
}

int main(){
    int a=12 ;int b=36;    
    printf("Sum of the values is : %d",sum(&a,&b));    
    return 0;
}