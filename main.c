//
// Created by victor on 19/10/2019.
//
#include <stdio.h>
#include <stdlib.h>

int main () {
    int option = 0;

    printf("Selecione uma opcao valida, logo abaixo: \n");
    printf("\t1 - Bubble Sort\n");
    printf("\t2 - Insertion Sort\n");
    printf("\t3 - Selection Sort\n");
    printf("\t4 - Merge Sort\n");
    printf("\t5 - Quick Sort\n");

    scanf("Teste: %d", &option);

    do {
        switch (option){
            case 1:
                //run bubbleSort
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