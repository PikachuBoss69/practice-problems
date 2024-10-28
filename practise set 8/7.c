/*
. Write a program to count the occurrence of a given character in a string
*/
#include <stdio.h>
#include <string.h>
int main(){
    int count=0,i;
    char str[]="hello bro";
    for ( i=0;i<strlen(str);i++){
        str[i];
        if (str[i]=='l'){
            count++;
        }
    }
    printf("no. of ( l ) in the string are : %d",count);
    return 0;
}