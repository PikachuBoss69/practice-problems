/*
 Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why?
*/
#include <stdio.h>

int pointer(int* i){
    printf("The address of the variable i is : %p",*(&i));

}

int main(){
    int i =13;
    printf("Adrees of the variable i is : %p\n",&i);
    pointer(&i);
    return 0;
}
