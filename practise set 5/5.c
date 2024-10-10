// Write a recursive function to calculate the sum of first ‘n’ natural numbers. 
#include <stdio.h>

int sum(int n){
    int sum1;
    if (n==0){
        return 0;
    }
    sum1=sum(n-1)+n;
    return sum1;
}
int main(){
    int no=3;
    int answer = sum(no);
    printf("Sum of the first %d natural numbers is : %d",no,answer);

    return 0;
}

