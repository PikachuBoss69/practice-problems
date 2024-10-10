//Write a program using function to find average of three numbers.
#include <stdio.h>

float average(int a,int b,int c){
    float d=(float)(a+b+c)/3;    
    return d;
}

int main(){
    float a;
    a=average(5,7,8);
    printf("the average is : %f",a);   
    return 0;
}
