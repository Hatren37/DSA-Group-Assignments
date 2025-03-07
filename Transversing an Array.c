#include <stdio.h>

int main() {
    // Declare and initialize an array of integers
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Traverse the array using a for loop
    printf("Traversing the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}