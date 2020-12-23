#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    if (n >= -5 && n <= 10 || n >= 25){
        printf("Cheia\n");
    } else {
        printf("Tracejada\n");
    }


    return 0;
}
