#include "header.h"

int main() {
    int initial_size = SIZE;
    integer *arr = MALLOC(initial_size, integer);

    initialize_memory(arr, initial_size);
    printf("Initial array:\n");
    show_memory(arr, initial_size);

    // Resize the array using realloc — double the size
    int new_size = 2 * initial_size;
   arr = resize_array(arr, new_size);


    // Populate the new elements
    initialize_memory(arr + initial_size, new_size - initial_size);
    printf("Resized array (after adding elements):\n");
    show_memory(arr, new_size);

    // Optional: Reduce size to test behavior
    int smaller_size = initial_size / 2;
    arr = resize_array(arr, smaller_size);


    printf("Array after shrinking (some elements may be lost):\n");
    show_memory(arr, smaller_size);

    free(arr);
    return EXIT_SUCCESS;
}
