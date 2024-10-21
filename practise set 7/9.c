/* Create a three–dimensional array and print the address of its elements in 
increasing order. */
#include <stdio.h>

int main() {
    // Define a 3D array with dimensions 2x2x2
    int arr[2][2][2];

    // Fill the array with some values
    int value = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                arr[i][j][k] = value++;
            }
        }
    }

    // Print the addresses of the elements in increasing order
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("Address of arr[%d][%d][%d]: %p\n", i, j, k, &arr[i][j][k]);
            }
        }
    }

    return 0;
}
