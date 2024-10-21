/*
 Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
to the third element where ptr is a pointer pointing to the first element of the 
array. 
*/
#include <stdio.h>

int main(){
    int i,number[10];
    printf("Enter the 10 numbers for array\n");
    for (i=0;i<10;i++){
        scanf("%d",&number[i]);
    }
    int*ptr=&number[0];
    printf("The third element of array is : %d\n",*(ptr+2));

    printf("the first element of array is : %d",*ptr);
    return 0;
}