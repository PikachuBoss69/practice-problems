//Write a program containing a function which reverses the array passed to it.
#include <stdio.h>

void reverse(int arr[]){
    int j,arry[3],t=2;
    for (j=0 ;j<3;j++){
        arry[j]=arr[t];
        t--;
    }
    for(j=0;j<3;j++){
        printf("value of array at %d is : %d\n",j,arry[j]);
    }
}

int main(){
    int arr[3],i;
    printf("Enter the numbers :\n");
    for (i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr);
    return 0;
}

// ALTERNATE CODE

/*
#include <stdio.h>

void reverse(int arr[], int size) {
    int j;
    // Print the reversed array
    for (j = size - 1; j >= 0; j--) {
        printf("Value of array at %d is: %d\n", j + 1, arr[j]);
    }
}

int main() {
    int arr[3], i;
    printf("Enter the numbers:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);  // Correctly passing the address of arr[i]
    }
    
    reverse(arr, 3);  // Pass the array and its size to the function
    return 0;
}

*/