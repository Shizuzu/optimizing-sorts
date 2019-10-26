#include <stdbool.h>
#include "../Utils/utils.h"

int bubble_sort_optimized(int *arr)
{
	int i, pivo, j;
	bool swap = false;
	
	for (i = 0; i < ARRAY_LENGTH-1; i++){
		swap = false;
		for (j = 0; j < ARRAY_LENGTH-i-1; j++){
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


int bubble_sort(int *arr)
{
	int i, aux, j;
	
	for (i = 0; i < ARRAY_LENGTH-1; i++)
	{
		for (j = 0; j < ARRAY_LENGTH-i-1; j++)
		{
			if(arr[j] > arr[j+1]){
                aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
	}
}






