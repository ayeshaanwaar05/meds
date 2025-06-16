#include "header.h"

// Only in this file you can directly call malloc, realloc, etc.
#undef malloc

void *alloc (size_t size){


  void *mempool;

  mempool = malloc(size);

  if (mempool != NULL) return mempool;
  
  else {
    printf("Out of memory");
    exit(EXIT_FAILURE);
  }

}

// Definition for initialize_memory

void initialize_memory(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Random values between 0 and 99
    }
}

// Definition for show_memory
void show_memory(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
integer* resize_array(integer *arr, int new_size) {
    integer *temp = realloc(arr, new_size * sizeof(integer));
    if (temp == NULL) {
        printf("Reallocation failed\n");
        exit(EXIT_FAILURE);
    }
    return temp;
}
