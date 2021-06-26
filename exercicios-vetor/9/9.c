#include <stdio.h>

int main(int argc, char const *argv[])
{
	int B[10], X=0, Xpositions[10], count=0;

	printf("Insira o valor que deseja filtrar: \n");
	scanf("%d", &X);

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &B[index]);
		if(B[index] == X){
			Xpositions[count] = index;
			count++;			
		}
	}

	printf("o valor %d aparece nas posicoes:\n ", X);
	for (int index = 0; index < count; ++index){
		printf("%d ", Xpositions[index]);
	}
	return 0;
}