//
// Created by victor on 19/10/2019.
//
#include <stdio.h>
#include <libnet.h>
#include "utils.h"

void print_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n-1) printf(", "); else printf("\n");
    }
}

int creating_random_number_vector(int arr[], int n){
    for (int x = 0; x < n; x++){
        arr[x] = rand() % n;
    }
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

