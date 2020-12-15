#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    if (n <= 10 || n >= 20 && n <= 30){
        printf("Tracejada\n");
    } else {
        printf("Cheia\n");
    }


    return 0;
}
