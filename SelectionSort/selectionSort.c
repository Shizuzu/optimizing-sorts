#include <stdio.h>

int selection_sort_optimized(int arr[], int size)
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
  

int selection_sort(int arr[], int size){
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
