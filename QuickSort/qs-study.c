#include <stdio.h>

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition(int arr[], int lower, int higher){
	//Determinação do meu pivo
	int pivo = arr[rand() % (lower - higher)];
	int i = (lower - 1);

	for(int j = lower; j <= higher-1; j++){
		if (arr[j] < pivo)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[higher]); 
	return i + 1;
}