/*
Write a program containing functions which counts the number of positive 
integers in an array
*/


#include <stdio.h>

int count(int array[],int size){
    int cnt=0;
    for (int i=0;i<size;i++){
        if(array[i]>0){
            cnt++;
        }
    }    
    return cnt;    
    

}
int main(){

    int array[6]={4,-1,-5,5,4,-9};
    int cmd =count(array,6);
    printf("no of positive values in array is : %d",cmd);    
    return 0;
}
