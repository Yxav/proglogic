#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero\n");
    scanf("%d", &n);

    if (n < 0){
        printf("Cheia\n");
    } else {
        printf("Tracejada\n");
    }


    return 0;
}
