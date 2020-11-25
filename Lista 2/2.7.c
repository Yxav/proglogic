#include <stdio.h>

int main(int argc, char const *argv[])
{
	int value1, value2;

	printf("Insira o primeiro valor\n");
	scanf("%d", &value1);

	printf("Insira o segundo valor\n");
	scanf("%d", &value2);


	if (value1>value2)
	{
		printf("%d %d\n", value2, value1);
	}
	else{

		printf("%d %d\n", value1, value2);

	}


	return 0;
}