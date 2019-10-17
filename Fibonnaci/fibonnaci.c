#include <stdio.h>

int fibonacci(int n){
	if (n < 2) {
		return n;
	} else
	{
		return fibonacci(n-2) + fibonacci(n-1);
	}
}

int main(int argc, char const *argv[]){
	int min = 0, max = 1;
	long value = min+max;

	printf("Centésim número finbonnaci: %d", fibonacci(10));
	
	return 0;
}
