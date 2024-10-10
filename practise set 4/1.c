// Write a program to print multiplication table of a given number n. 
#include <stdio.h>
int main(){
    int number ,i ,table;
    printf("Enter the number : ");
    scanf("%d",&number);
    i=1;
    while(i<=10){
        table= number*i;
        printf("%d x %d = %d\n",number,i,table);
        i++;
        
        

    }
    return 0;

}