#include <stdio.h>

int mult(int n, int x) {
	if (x <= 0) return x;
	return(n, x-1)*x;	
}

int main(int argc, char const *argv[]){
	int fat = 0;
	printf("Entre com um valor: ");
	scanf("%d", &fat);

	int result = 1;
	while (result){
		result =  mult(fat, 10);
		printf("Resultado: %d",result);
	}
	
	// printf("Resultado: %d", mult(fat, 10));
	return 0;
}