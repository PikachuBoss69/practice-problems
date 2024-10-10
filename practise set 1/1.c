//Write a C program to calculate area of a rectangle Using inputs supplied by the user
#include <stdio.h>

int main(){
    int a;
    int b;
    int area;
    printf("WE HAVE A RECTANGLE ,TO CALCULATE ITS AREA \n ");
    printf("What is the length of rectangle : ");
    scanf(" %d",&a);
    printf("\n What is the breath of rectangle : ");
    scanf("%d",&b);
    area = a*b;
    printf("\n The area of rectangle is : %d",area);
    return 0;
}
