#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100  // # of values in the test

// function prototype for swapping elements
void swap(int *element1Ptr, int *element2Ptr);

int main() {
    int a[N];
    int comparisons = 0;
    int swaps = 0;

    // produces a different sequence of random #'s each time the program runs
    srand(time(NULL));

    // initialize the array with random numbers in the range [1, N]
    for (int i = 0; i < N; i++) {
        a[i] = rand() % N + 1;
    }

    // print the initial array 
    printf("Initial array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // bubble sort algorithm
    for (int pass = 0; pass < N - 1; pass++) {
        for (int i = 0; i < N - pass - 1; i++) {
            comparisons++;
            if (a[i] > a[i + 1]) {
                swap(&a[i], &a[i + 1]);
                swaps++;
            }
        }
    }

    // print the sorted array 
    printf("Sorted array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // print results
    printf("N = %d\n", N);
    printf("Comparisons = %d\n", comparisons);
    printf("Swaps = %d\n", swaps);

    return 0;
}

// Demo Example: 
// int a = 10;
// int *element1Ptr = &a;  // element1Ptr now holds the address of a, & gets the address, * says its a pointer

// swapping (swapping values of 2 integers)

void swap(int *element1Ptr, int *element2Ptr) {
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}
