#include <stdio.h>

int selectionSortUpdated(int arr[], int size) 
{  
    for (int i = 0; i < size - 1; i++)  { 
        int min = i; 
        for (int j = i + 1; j < size; j++) 
            if (arr[min] > arr[j]){
                min = j;
			}
        	
			int key = arr[min]; 
			while (min > i)  
			{ 
				arr[min] = arr[min - 1]; 
				min--; 
			} 
        	arr[i] = key; 
    } 
} 
  

int selectionSort(int arr[], int size){
	int aux = 0;
	for (int i = 0; i < size-1; i++) {
		aux = i;
		for (int j = i+1; j < size; j++){
			if (arr[j] < arr[aux]) {
				arr[aux] = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[aux];
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

int main(int argc, char const *argv[])
{
	int arr[20];
	int size = sizeof(arr)/sizeof(int);
	int i = 0;

	while (i < size){
		arr[i] = rand() % 20;
		i++;
	}
	
	printf("Array desordenado: ");
	printArray(arr, size);

	selectionSort(arr, size);

	printf("Array ordenado: ");
	printArray(arr, size);
		
		
	return 0;
}
