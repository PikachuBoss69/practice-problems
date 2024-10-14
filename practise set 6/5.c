/*
Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main(). 
*/
#include <stdio.h>

int sum_average(int*a , int*b ,int*sum ,int*average){
    *sum = (*a)+(*b);
    *average = *sum/2;
}


int main(){
    int first ,second,sum ,average;
    printf("Enter the numbers whose sum and average to be found\n");
    printf("First no. : ");
    scanf("%d",&first);
    printf("second no. : ");
    scanf("%d",&second);
    sum_average(&first , &second, &sum , &average);  
    printf("Sum of the numbers is : %d\n",sum);
    printf("The average of these numbers is : %d",average);  
    return 0;
}