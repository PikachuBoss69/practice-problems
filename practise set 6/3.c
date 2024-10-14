/* Write a program to change the value of a variable to ten times of its current 
value. */

#include <stdio.h>

int change(int* a){
    int temp =10*(*a);
    *a=temp;
    return *a;


}

int main(){
    int a=12;
    printf("address of the variable a is %p\n",&a);
    printf("original value of a is :%d\n",a);
    change(&a);
    printf("The new value of a is %d\n",a);
    return 0;
}