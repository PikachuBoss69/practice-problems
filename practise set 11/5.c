/*
Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to 
make it store 15 number (from 7 x 1 to 7 x 15)
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=10;
    int* table;
    table=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){

        printf("7 X %d = %d\n",i+1,(i+1)*7);

    }
    n=15;
    printf("\nTable of 7 upto 15 is \n");
    table=(int*)realloc(15,n*sizeof(int));
        for(int i=0;i<n;i++){

        printf("7 X %d = %d\n",i+1,(i+1)*7);

    }
    return 0;
}