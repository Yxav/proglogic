#include <stdio.h>

int main(int argc, char const *argv[])
{
	int A[10];

	for (int index = 0; index < 10; ++index){
		A[index] = index + 1;
		printf("%d ", A[index]);		
	}
	return 0;
}