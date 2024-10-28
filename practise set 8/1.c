/*
. Write a program to take string as an input from the user using %c and %s confirm 
that the strings are equal.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char first[100];
    char second[100];
    printf("ENter the first string : ");
    scanf("%c",&first[0]);
    first[1]='\0'; //null terminates the string
    printf("Enter the second string : ");
    scanf("%s",&second[0]);
    if (strcmp(first,second)==0){
        printf("strings are equal");
    }
    else{
        printf("strings are not equal");
    }
    return 0;
}