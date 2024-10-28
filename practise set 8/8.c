/*
Write a program to check whether a given character is present in a string or not
*/
#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
    char str[]="hallo world";
    for(int i=0;i<strlen(str);i++){
        str[i];
        if(str[i]=='a'){
            count++;
            printf("a is present in the string and no. of a is : %d",count);          
        }
    }
    return 0;
}