#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,aux;

    printf("Digite os valores de A, B e C\n");
    scanf("%d %d %d", &a, &b, &c);

    if (b>a){
        aux = a;
        a = b;
        b = aux;
    }
    if (c>b){
        aux = b;
        b = c;
        c = aux;
    }
        printf("%d\n", a+b);

    return 0;
}
