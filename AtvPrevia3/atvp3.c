#include <stdio.h>
#include <stdlib.h>

void printFullVetor(int* vetor, int lenght){
	int count = 0;
	printf("Passo interior: ");
	while (count < lenght){
		printf(" %d |", vetor[count]);
		count++;
	}
	printf("\n");
	//Vai ficar faltando um
}

int main(int argc, char const *argv[]){
	int vetor[] = {3,1,10,64,13,8,9,2};
	size_t lenghtVetor = sizeof(vetor)/sizeof(vetor[0]);
	int aux=0;
	//printf("Lenght: %lu", lenghtVetor/4); 

	//Iniciando Selection Sort
	printf("Iniciando Selection Sort...\n");
	for (int i = 0; i < lenghtVetor-1; i++){
		int minimal = i;

		for (int j = 1; j < lenghtVetor; j++){
			if (vetor[j] < vetor[minimal]){
				aux = vetor[minimal];
				vetor[minimal] = vetor[j];
				vetor[j] = aux;
				printFullVetor(&vetor, lenghtVetor);
			}
		}	
	}

	printf("------------------------\n");

	//Iniciando Bubble sort
	printf("Iniciando Bubble Sort...\n");
	for (int i = 0; i < lenghtVetor-1; i++)
	{
		for (int j = 0; j < lenghtVetor-i-1; j++)
		{
			if(vetor[i] > vetor[i+1]){
				aux = vetor[i+1];
				vetor[i+1] = vetor[i];
				vetor[i] = aux;
				printFullVetor(&vetor, lenghtVetor);
			}
		}
		
	}
	
	

	return 0;
}
