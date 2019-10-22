//
// Created by victor on 19/10/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "BubbleSort/bubbleSort.h"
#include "Utils/utils.h"

#define ARRAY_LENGTH 20
#define MAX_NUMBER 20

int main () {
    int option = 0;
    int vector[ARRAY_LENGTH];
    int *array = &vector;
    int size = sizeof(array)/sizeof(int);

    printf("Selecione uma opcao valida, logo abaixo: \n");
    printf("\t1 - Bubble Sort\n");
    printf("\t2 - Insertion Sort\n");
    printf("\t3 - Selection Sort\n");
    printf("\t4 - Merge Sort\n");
    printf("\t5 - Quick Sort\n");

    creating_random_number_vector(&vector, MAX_NUMBER);

    printf("Entre com uma opcao: ");
    scanf("%d", &option);

    do {
        switch (option){
            case 1:
                //run bubbleSort
                bubble_sort(&vector);
                print_array(&vector, array_length(vector));
                break;
            case 2:
                //run insertionSort
                break;
            case 3:
                //run selectionSort
                break;
            case 4:
                //run mergeSort
                break;
            case 5:
                //run quickSort
                break;
            default:
                printf("Opcao invalida, tente novamente");
                option = 0;
                break;
        }
    } while (!option);
    return 0;
}

/*
    int main(int argc, char const *argv[]){
    int arr[100000];
	int size = sizeof(arr)/sizeof(int);
	double timeOfExecution = 0;
	clock_t time;

	creatingRandomNumberVector(arr, size);

	printf("==> Tempos de Execução <==\n");

    time = clock();
    bubbleSort(arr, size);
    time = clock() - time;
    timeOfExecution = ((double)time)/CLOCKS_PER_SEC;
    printf("\tBubble Sort: %fs\n", timeOfExecution);

    time = clock();
    bubbleSort(arr, size);
    time = clock() - time;
    timeOfExecution = ((double)time)/CLOCKS_PER_SEC;
    printf("\tBubble Sort Melhorado: %fs\n", timeOfExecution);
    return 0;
    }
 */