////Repeat problem 6 for a custom input for 3 numbers given by the user
#include <stdio.h>

int main(){
    int array[3][10],a,b,c;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);
    printf("Enter the third number : \n");
    scanf("%d",&c);
    for (int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            if(i==0){
                array[i][j]=(j+1)*a;
            }
            else if(i==1){
                array[i][j]=(j+1)*b;
            }
            else{
                array[i][j]=(j+1)*c;
            }
        }
    }
    printf("table of two is :\n");
    for(int k=0;k<10;k++){
        printf("%d x %d = %d\n",a,k+1,array[0][k]);

    }
        printf("\ntable of seven is :\n");
    for(int k=0;k<10;k++){
        printf("%d x %d = %d\n",b,k+1,array[1][k]);

    }
        printf("\ntable of nine is :\n");
    for(int k=0;k<10;k++){
        printf("%d x %d = %d\n",c,k+1,array[2][k]);

    }
 

    
    return 0;
}