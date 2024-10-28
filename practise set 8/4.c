/*
Write your own version of strcpy function from <string.h>
*/


#include <stdio.h>
int str_len(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
void str_cpy(char first[],char second[]){
    int i=0;
    while(i<=str_len(first)){
        second[i]=first[i];
        i++;
    }
    second[str_len(first)]='\0';




}
int main(){
    char first[100],second[100];
    int start_length,end_length;
    printf("Enter the string: ");
    gets(first);
    str_cpy(first,second);
    printf("%s %s",first,second);    
    return 0;
}

//ALTERNATE VERSION OF CODE FROM CHAT GPT



/*
#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0'; // Null-terminate the destination string
}

int main() {
    char first[100], second[100];

    printf("Enter the string: ");
    scanf("%s", first);

    my_strcpy(second, first);

    printf("Copied string: %s\n", second);

    return 0;
}
*/

