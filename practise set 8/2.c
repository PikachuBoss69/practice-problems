//Write your own version of strlen function from <string.h>

#include <stdio.h>
int str_len(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;



}
int main() {
    char str[100]; 
    printf("Enter the string : ");
    gets(str);  


    printf("Length of the string: %d\n",str_len(str));
    return 0;
}