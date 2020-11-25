#include <stdio.h>

int main(int argc, char const *argv[])
{
	int value;

	printf("Insira um valor\n");
	scanf("%d", &value);

	if(value % 2 == 0){
		printf("Valor par\n");
	} else {
		printf("Valor impar\n");
	}
	return 0;
}