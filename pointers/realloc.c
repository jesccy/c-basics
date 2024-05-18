#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int num_elements = 5;

    // Allocate memory for an array of 5 integers using malloc
    ptr = (int*) malloc(num_elements * sizeof(int));

    // Check if the allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit the program if memory allocation fails
    }

    // Initialize the array
    for (int i = 0; i < num_elements; ++i) {
        ptr[i] = i;
    }

    // Print the initial elements of the array
    printf("Initial elements of the array: ");
    for (int i = 0; i < num_elements; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Resize the array to hold 10 integers
    num_elements = 10;
    int *new_ptr = (int*) realloc(ptr, num_elements * sizeof(int));

    // Check if the reallocation was successful
    if (new_ptr == NULL) {
        printf("Memory reallocation failed\n");
        free(ptr); // Free the original block of memory
        return 1; // Exit the program if memory reallocation fails
    }

    ptr = new_ptr;

    // Initialize the new elements of the array
    for (int i = 5; i < num_elements; ++i) {
        ptr[i] = i;
    }

    // Print the elements of the resized array
    printf("Elements of the resized array: ");
    for (int i = 0; i < num_elements; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);

    return 0;
}
