//
// Created by victor on 19/10/2019.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "utils.h"

void print_array(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n-1) printf(", "); else printf("\n");
    }
}

int creating_random_number_vector(int *arr, int n){
//    printf("Array: %lu",&arr);
//    printf("Array: %lu",arr);
//    printf("Array: %u",*arr);
    for (int x = 0; x < n; x++){
        arr[x] = rand() % n;
        printf("%d - Data intsert: %d\n", x+1, arr[x]);
    }
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

double time_consuming(void (*function)(int), int arr[]){
    clock_t time;
    time = clock();
    function((int) arr);
    time = clock() - time;
    return ((double)time)/CLOCKS_PER_SEC;
}

int array_length(int *array)
{
    return sizeof(*array)/sizeof(int);
}
