#include <stdio.h>

int main(int argc, char const *argv[])
{
    int value;

    printf("Digite um valor:\n");
    scanf("%d", &value);

    if (value>0) {
        printf("Positivo\n");
    } else {
        if (value == 0)
        {
            printf("Zero\n");
        } else {
            printf("Negativo\n");
        }
    }
    return 0;
}
