#include <stdio.h>

int main(int argc, char const *argv[])
{
	int B[10];

	for (int index = 0; index < 10; ++index){
		if(index % 2 != 0) {
			B[index] = 1;
		} else {
			B[index] = 0;
		}
	}
	for (int index = 0; index < 10; ++index){
		printf("%d ", B[index]);
	}
	return 0;
}