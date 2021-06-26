#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Z[10], W[10], count=9;

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &Z[index]);
	}
	for (int index = 0; index < 10; ++index){
		W[count] = Z[index];
		count--;
	}

	for (int index = 0; index < 10; ++index){
		printf("%d ", W[index]);
	}
	return 0;
}