#include <stdio.h>

int main(int argc, char const *argv[])
{
	int value1, value2;

	printf("Insira dois valores:\n");
	scanf("%d %d", &value1, &value2);

	if(value1 > value2){
		printf("%d %d\n", value2,value1);
	} else {
		printf("%d %d\n", value1,value2);
	}
	return 0;
}