/*
. Write a program to decrypt the string encrypted using encrypt function in 
problem 5
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[]="ifmmp!hvz{";
    for ( int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]-1;

    }
    printf("Your decrypted string is : %s",str);    
    return 0;
}