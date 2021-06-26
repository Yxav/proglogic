#include <stdio.h>

int main(int argc, char const *argv[])
{
	int C[10];

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &C[index]);
		if(C[index] < 0) {
			C[index] = 0;
		}
	}

	for (int index = 0; index < 10; ++index){
		printf("%d ", C[index]);
	}
	return 0;
}