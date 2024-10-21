// Repeat problem 2 for a general input provided by the user using scanf.

#include <stdio.h>

int main(){
    int multiply[10],i,j=1,t=1;
    for (i=0;i<10;i++){
        printf("5 x %d = ",j);
        scanf("%d",&multiply[i]);
        j++;    
    }
    for (i = 0; i < 10; i++)
    {
        printf("5 x %d = %d\n",t,multiply[i]);
        t++;
    }
    
    return 0;
}