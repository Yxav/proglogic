#include <stdio.h>

int main(int argc, char const *argv[])
{
	int value1, value2;

	printf("Por favor, insira os valores:\n");
	scanf("%d %d", &value1, &value2 );

	if (value1 > value2) {
		printf("%d \n", value1);
	} else {
		printf("%d \n", value2);
	}
	return 0;
}


 