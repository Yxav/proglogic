#include <stdio.h>

int isOddOrEven(int number);


int main(int argc, char const *argv[])
{
	int number=0;

	printf("Insira um numero\n");
	scanf("%d", &number);
	printf("%d\n", isOddOrEven(number));
}


int isOddOrEven(int number){
	if (number % 2 == 0) return 1;
	else return 0;

}