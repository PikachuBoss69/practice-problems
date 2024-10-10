// Write a program using recursion to calculate nth element of Fibonacci series
#include <stdio.h>

int Fibonacci(int n){
    int sum1;
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    sum1=Fibonacci(n-1)+Fibonacci(n-2);
    return sum1;
}
int main(){
    int no=45;
    int answer = Fibonacci(no);
    printf("the %d term of fibonacci series is : %d",no,answer);

    return 0;
}

