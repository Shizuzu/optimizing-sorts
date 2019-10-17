#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int bubbleSortUpdated(int arr[], int n){
	int i, pivo, j;
	bool swap = false;
	
	for (i = 0; i < n-1; i++){
		swap = false;
		for (j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				pivo = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = pivo;
				swap = true;
			}
		}
		if(swap == false) break;
	}
}


int bubbleSort(int arr[], int n){
	int i, pivo, j;
	
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if(arr[j] > arr[j+1]){
				pivo = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = pivo;
			}
		}
	}
}

void printArray(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i != n-1) printf(", "); else printf("\n");
	}
}

int creatingRandomNumberVector(int arr[], int n){
	for (int x = 0; x < n; x++){
		arr[x] = rand() % n;
	}
}


int main(int argc, char const *argv[]){
	int arr[100000];
	int size = sizeof(arr)/sizeof(int);
	double timeOfExecution = 0;
	clock_t time;

	creatingRandomNumberVector(arr, size);

	printf("==> Tempos de Execução <==\n");
	/*
	* Process time of normal bubbleSort
	*/

	time = clock();
	bubbleSort(arr, size);
	time = clock() - time;
	timeOfExecution = ((double)time)/CLOCKS_PER_SEC;
	printf("\tBubble Sort: %fs\n", timeOfExecution);

	/*
	* Process time of modificaded bubbleSort
	*/
	time = clock();
	bubbleSort(arr, size);
	time = clock() - time;
	timeOfExecution = ((double)time)/CLOCKS_PER_SEC;
	printf("\tBubble Sort Melhorado: %fs\n", timeOfExecution);
	return 0;
}
