/*
Take name and salary of two employees as input from the user and write them to 
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/
#include <stdio.h>

int main(){
    FILE* employee;
    employee=fopen("employee.txt","w");
    char ch1[10],ch2[10];
    int num1,num2;
    
    printf("Enter the name of first employee :\n");
    scanf("%s",&ch1);
    printf("Enter the salary : \n");
    scanf("%d",&num1);
    printf("Enter the name of second employee :\n");
    scanf("%s",&ch2);
    printf("Enter the salary : \n"); 
    scanf("%d",&num2);
    fprintf(employee,"i. %s, %d\n",ch1,num1);
    fprintf(employee,"ii. %s, %d",ch2,num2);
    fclose(employee);
    return 0;
}