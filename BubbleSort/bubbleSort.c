#include <stdbool.h>
#include "../Utils/utils.h"

int bubble_sort_optimized(int *arr)
{
    int length = array_length(arr);
	int i, pivo, j;
	bool swap = false;
	
	for (i = 0; i < length-1; i++){
		swap = false;
		for (j = 0; j < length-i-1; j++){
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
    int length = array_length(arr);
	int i, pivo, j;
	
	for (i = 0; i < length-1; i++)
	{
		for (j = 0; j < length-i-1; j++)
		{
			if(arr[j] > arr[j+1]){
				pivo = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = pivo;
			}
		}
	}
}






