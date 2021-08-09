#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maiorNumero(int value1, int value2);


int main(int argc, char const *argv[])
{
    int times=0, value1=0, value2=0, op=0;
    printf("Insira quantas vezes deve repetir\n");
    scanf("%d", &times);

    for (int index = 0; index < times; ++index)
    {
        printf("Insira os valores\n");
        scanf("%d %d", &value1, &value2);        
        op = maiorNumero(value1, value2);
        if(op == - 1){
            printf("Eles são iguais\n");
        } else {
            printf("%d\n", op);
        }
    }

}


int maiorNumero(int value1, int value2){
    if(value1>value2) return value1;
    else if(value1==value2) return -1;
    else return value2;
}