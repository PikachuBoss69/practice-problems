/* Write a program using function to print the following pattern (first n lines)

* 
* * * 
* * * * * 


*/
#include <stdio.h>

void pattern(int n, int repeat){
    if (repeat >n){
        return;
    }
    for (int j=0;j<(2*repeat -1);j++){
        printf("* ");
    }
    printf("\n");
    pattern( n,  repeat+1);
}
int main(){
    int n=3;
    pattern(n, 1);
    return 0;
}