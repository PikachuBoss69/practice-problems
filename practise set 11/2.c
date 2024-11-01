//Use the array in problem 1 to store 6 integers entered by the user
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=6;
    int* pointer;
    pointer=(int*)malloc(n*sizeof(int));
    printf("Ente the values : \n");    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&pointer[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",pointer[i]);
    }
    
    return 0;
}