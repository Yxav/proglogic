#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    if (n > 0){
        printf("Tracejada\n");
    } else {
        printf("Cheia\n");
    }


    return 0;
}


// Mudar os chapin, pra maior ou igual