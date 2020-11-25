#include <stdio.h>

int main(int argc, char const *argv[])
{
		
	int num, fat;

	printf("Insira um numero para ser calculado o fatorial\n");
	scanf("%d", &num);

	for (fat = 1; num > 1; num = num - 1)
	{
		fat = fat * num;
	}
	printf("o Fatorial do numero escolhido eh %d\n", fat);

	return 0;
}

