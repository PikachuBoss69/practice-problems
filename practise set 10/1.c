//Write a program to read three integers from a file
#include <stdio.h>

int main(){
    FILE* read;
    int num1,num2,num3;
    read=fopen("file.txt","r");
    fscanf(read,"%d %d %d",&num1,&num2,&num3);
    printf("first integer : %d %d %d ",num1,num2,num3);
    
    fclose(read);
    return 0;
}