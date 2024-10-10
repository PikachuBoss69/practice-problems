/* Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height*/
#include<stdio.h>

int main(){
    float radius , height , area , volume ;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    printf("Enter the height :");
    scanf("%f",&height);
    area = 3.14*(radius*radius);

    printf("Area of circle is : %f",area);

    volume = 3.24*radius*radius*height;
    printf("Volume of cylinder is : %f",volume);
    return 0;

     
}