//Attempt problem 4 using calloc()
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=5;
    int* pointer;
    pointer=(int*)calloc(n,sizeof(int));
    printf("Ente the values : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&pointer[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",pointer[i]);
    }    
    n=10;
    pointer=(int*)realloc(pointer,10*sizeof(int));
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