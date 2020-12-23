#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number ,num_ant;

	printf("Digite o numero");
	scanf("%d", &number);

	num_ant = number - 1;

	printf("O numero anterior eh %d\n\n", num_ant);

	return 0;
}