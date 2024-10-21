/*
 Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 
and 9 respectively
*/
#include <stdio.h>

int main(){
    int array[3][10];
    for (int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            if(i==0){
                array[i][j]=(j+1)*2;
            }
            else if(i==1){
                array[i][j]=(j+1)*7;
            }
            else{
                array[i][j]=(j+1)*9;
            }
        }
    }
    printf("table of two is :\n");
    for(int k=0;k<10;k++){
        printf("2 x %d = %d\n",k+1,array[0][k]);

    }
        printf("\ntable of seven is :\n");
    for(int k=0;k<10;k++){
        printf("7 x %d = %d\n",k+1,array[1][k]);

    }
        printf("\ntable of nine is :\n");
    for(int k=0;k<10;k++){
        printf("9 x %d = %d\n",k+1,array[2][k]);

    }
 

    
    return 0;
}