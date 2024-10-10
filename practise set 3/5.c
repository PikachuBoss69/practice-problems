/*
Write a program to find greatest of four numbers entered by the user
*/

#include <stdio.h>
int main(){
    int first , second , third , fourth ;
    printf("Enter the first number : ");
    scanf("%d",&first);
    printf("Enter the second number : ");
    scanf("%d",&second);
    printf("Enter the third number : ");
    scanf("%d",&third);
    printf("Enter the fourth number : ");
    scanf("%d",&fourth);
    if (first >second && first > third && first >fourth){
        printf("Number %d is the greatest amoung the four numbers",first);

    }
    else if (first < second && second > third && second >fourth){
        printf("Number %d is the greatest amoung the four numbers",second);
    }
    else if (third>first && second < third && third >fourth){
        printf("Number %d is the greatest amoung the four numbers",third);

    }
    else{
        printf("Number %d is the greatest amoung the four numbers",fourth);
    }
    return 0;


}