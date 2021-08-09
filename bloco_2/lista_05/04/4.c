#include <stdio.h>

int isPositive(int number);


int main(int argc, char const *argv[])
{
    int number=0;

    printf("Insira um numero\n");
    scanf("%d", &number);
    printf("%d\n", isPositive(number));
}


int isPositive(int number){
    if (number > 0) return 1;
    else if(number == 0) return 0; 
    else return -1;

}