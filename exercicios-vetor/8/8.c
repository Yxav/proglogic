#include <stdio.h>

int main(int argc, char const *argv[])
{
	int A[10], V=0, Vtimes=0;

	printf("Insira o valor que deseja filtrar: \n");
	scanf("%d", &V);

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &A[index]);
		if(A[index] == V){
			Vtimes++;
		}
	}
		printf("O valor %d aparece (%d)vezes no vetor A\n",V,Vtimes);
	return 0;
}