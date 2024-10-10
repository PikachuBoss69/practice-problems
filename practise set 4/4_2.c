// Write a program to implement program 5 using ‘do-while’  loop.
#include<stdio.h>
int main(){
    int a=0 , b=1;
    
    do
    { 
        a=a+b;
        b++;
        
    }while(b<=10);
        
    
       
    
    printf("The sum of first 10 natural numbers is : %d", a);
    

}