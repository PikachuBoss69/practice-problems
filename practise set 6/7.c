/*
Try problem 3 using call by value and verify that it does not change the value of 
the said variable.
*/

#include <stdio.h>

int change(int a){
    int temp =10*(a);
    a=temp;
    return a;


}

int main(){
    int a=12;
    printf("address of the variable a is %p\n",&a);
    printf("original value of a is: %d\n",a);
    change(a);
    printf("The new value of a is: %d\n",a);
    printf("As both the new and the original values are same ,\nthis concludes that call by value  does not change the value of the said variable  ");
    return 0;
}