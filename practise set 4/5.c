/*
 Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10). 
*/
#include <stdio.h>
int main(){
    int table,multi=1,sum=0;
    while(multi<=10){
        table=multi*8;
        sum=sum+table;
        multi++;
    }
    printf("sum of the numbers occurring in the multiplication table of 8 is : %d",sum);
    



}