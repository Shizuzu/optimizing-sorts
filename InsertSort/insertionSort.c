#include <stdio.h>
#include <stdbool.h>

void insertionSortUpdated(int arr[], int n){
	int i, key, j;

	for (i = 0; i < n; i++){
		key = arr[i];
		j = i - 1;
		while (j >=0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}

void insertionSort(int arr[], int n){
	int i, key, j;

	for (i = 0; i < n; i++){
		key = arr[i];
		j = i - 1;

		while (j >=0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j-1;
		}

		arr[j+1] = key;
	}
}

void printArray(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i != n-1) printf(", "); else printf("\n");
	}
	
}

int main(int argc, char const *argv[]){
	int arr[15];
	int i = 0;
	int size = sizeof(arr)/sizeof(int);

	while (i < size){
		arr[i] = rand() % size;
		i++;
	}
	
	printf("Array desordenado: ");
	printArray(arr, size);

	insertionSortUpdated(arr, size);

	printf("Array ordenado: ");
	printArray(arr, size);

	return 0;
}
