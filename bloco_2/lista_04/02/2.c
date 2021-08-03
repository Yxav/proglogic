#include <stdio.h>

void multiplicationTable(int number);


int main(int argc, char const *argv[])
{
	int number=0;

	printf("Insira o valor para ser multiplicado\n");
	scanf("%d", &number);
	multiplicationTable(number);
}


void multiplicationTable(int number){
	for (int index = 1; index <= 10; ++index)
	{
		printf("%d * %d = %d\n", index, number, index * number);
	}

}