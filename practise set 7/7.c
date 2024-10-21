//Repeat problem 6 for a custom input given by the user.
#include <stdio.h>

int main(){
    int array[10],table;
    printf("Enter the number : ");
    scanf("%d",&table);
    for (int i=0;i<10;i++){
        array[i]=table*(i+1);
    }
    printf("table of two is :\n");
    for(int k=0;k<10;k++){
        printf("%d x %d = %d\n",table,k+1,array[k]);

    }


    
    return 0;
}