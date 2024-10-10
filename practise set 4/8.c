//. Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>
int main(){
    int prime =0 ,  i;
    int n = 7;

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    else{
         for (i = 2; i < n; i++)
    {
        if (n%i==0){
            prime=1;
            break;
        }
    }
    }

   
    if (prime){
        printf("The no %d is not PRIME",n);

    }
    else{
        printf("The no %d is  PRIME",n);
    }
    

    
    return 0;
}