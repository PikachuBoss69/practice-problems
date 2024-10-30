/*
Write a program to read a text file character by character and write its content 
twice in separate file
*/
#include <stdio.h>

int main(){
    FILE* read;
    FILE* write;
    read=fopen("read.txt","r");
    write=fopen("write.txt","a");
    int i=0;
    while(1){

    char ch=fgetc(read);

    if(ch==EOF){
        break;
    }
    else{
        fprintf(write,"%c",ch);
        fprintf(write,"%c",ch);
        printf("%c",ch);
    }
    }


    fclose(read);
    fclose(write);
    return 0;
}