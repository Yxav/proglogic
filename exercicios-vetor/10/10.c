#include <stdio.h>

int main(int argc, char const *argv[])
{
	int C[10], A=0, flag=0;

	printf("Insira o valor que deseja achar: \n");
	scanf("%d", &A);
	while(A<0){
		printf("Somente valores positivos: \n");
		scanf("%d", &A);
	}

	printf("Insira o valor do vetor: \n");
	for (int index = 0; index < 10; ++index){
		scanf("%d", &C[index]);
		while(C[index]<0){
			printf("Somente valores positivos: \n");
			scanf("%d", &C[index]);
		}

		if(C[index] == A) {
			flag=1;
		}
	}

	if (flag==1){
		printf("ACHEI\n");
	} else {
		printf("NAO ACHEI\n");

	}

	return 0;
}