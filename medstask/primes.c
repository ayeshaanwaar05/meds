/**
 * This program computes the sum of the first n
 * prime numbers.  Optionally, it allows the user
 * to provide n as a command line argument, but
 * defaults to the first n = 10 primes
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * This function takes an integer array (of size n) and
 * returns the sum of its elements.  It returns 0 if the
 * array is NULL or if its size is <= 0
 */
int sum(int *arr, int n);

/**
 * This function returns an array containing the first
 * n prime numbers
 */
int* getPrimes(int n);

/**
 * This function determines returns true if the give
 * integer is prime and false otherwise.
 */
int isPrime(int x);


int main(int argc, char **argv) {
    int n = 10; // default to first 10 primes

    // Correct argument parsing
    if (argc == 2) {
        n = atoi(argv[1]);
        if (n <= 0) {
            printf("Please enter a positive integer.\n");
            return 1;
        }
    }

    int *primes = getPrimes(n);
    if (primes == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int s = sum(primes, n);
    printf("The sum of the first %d primes is %d\n", n, s);

    free(primes); // Don't forget to free memory

    return 0;
}

int sum(int *arr, int n) {
    if (arr == NULL || n <= 0)
        return 0;

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];  // Correct way to add to total
    }
    return total;
}

int* getPrimes(int n) {
    int *result = malloc(n * sizeof(int));
     if (result == NULL) return NULL;

    int i = 0;
    int x = 2;

    while (i < n) {
        if (isPrime(x)) {
            result[i++] = x;
        }
        x++; // Always increment
    }

    return result;
}


int isPrime(int x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    for(int i=3; i<=sqrt(x); i+=2) {
     if(x % i == 0) {
      return 0;
    }
  }
  return 1;
}
