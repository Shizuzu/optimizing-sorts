#include <stdio.h>
#include <stdbool.h>

int bubbleSort(int arr[], int n){
	int i, pivo, j, count = 0;
	bool swap = false;
	
	for (i = 0; i < n-1; i++){
		swap = false;
		for (j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				pivo = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = pivo;
				swap = true;
				count++;
			}
		}
		if(swap == false) break;
	}
	printf("Quantidades de troca: %d\n", count);
}

void printArray(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i != n-1) printf(", "); else printf("\n");
	}
}

int main(int argc, char const *argv[]){
	int arr[100];
	int size = sizeof(arr)/sizeof(int);

	for (int x = 0; x < size; x++){
		arr[x] = rand() % size;
	}

	printf("Array desordenado: ");
	printArray(arr, size);

	bubbleSort(arr, size);

	printf("Array ordenado: ");
	printArray(arr, size);
	
	return 0;
}
