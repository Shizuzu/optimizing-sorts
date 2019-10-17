#include <stdio.h>

int fatorial(int n) {
	if (n <= 1) return n;
	return fatorial(n-1)*n;
}

int main(int argc, char const *argv[]){
	int fat = 0;
	printf("Entre com um valor: ");
	scanf("%d", &fat);

	printf("Resultado: %d", fatorial(fat));
	return 0;
}
