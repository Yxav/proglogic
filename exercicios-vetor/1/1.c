#include <stdio.h>

int main(int argc, char const *argv[])
{
	int X[10];

	for (int index = 0; index < 10; ++index){
		X[index] = 30;
	}	
	for (int index = 0; index < 10; ++index){
		printf("%d ", X[index]);
	}
	return 0;
}