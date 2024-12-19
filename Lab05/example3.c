#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50}; // In C, array name often gives the address of the first element
    int *p = arr; // Pointer to the first element of the array

    // Print elements using array indexing
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Print elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    return 0;
}
