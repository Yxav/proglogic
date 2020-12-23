#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;

    printf("Insira o valor de A e B:\n");
    scanf("%d %d", &a, &b);

    printf("Amarelo\n");

    if(a==1){
        printf("Azul\nVerde\nRoxo\n");
    } else {
        printf("Pera\n");
        if (b==1)
        {
            printf("Maca\n");
        } else {
            printf("Morango\n");
        }
    }

    printf("Uva\n");

    return 0;
}
