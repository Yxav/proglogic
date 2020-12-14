#include <stdio.h>

int main(int argc, char const *argv[])
{
    int type;
    float quantity, total;

    printf("Digite a quantidade de litros vendidos:\n");
    scanf("%f", &quantity);

    printf("Escreva o combustível: 1 - Álcool 2 - Gasolina\n");
    scanf("%d", &type);

    if(type == 1 && quantity <= 20){
        total = quantity * (4.03 - (4.03*0.03));
    } else {
        if (type == 1 && quantity > 20){
            total = quantity * (4.03 - (4.03*0.05));
        }
    }

    if(type == 2 && quantity <= 15){
        total = quantity * (4.53 - (4.53*0.035));
    } else {
        if (type == 2 && quantity > 15){
            total = quantity * (4.53 - (4.53*0.06));
        }
    }

    printf("Total a ser pago: R$%.2f\n\n", total);

    return 0;
}
