/*
Write a program to generate multiplication table of a given number in text 
format. Make sure that the file is readable and well formatted.
*/
#include <stdio.h>

int main(){
    FILE* table;
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    table=fopen("table.txt","w");
    for (int i = 1; i < 11; i++)
    {
        fprintf(table,"%d X %d = %d\n",num,i,(num*i));
    }
    
    fclose(table);
    return 0;
}