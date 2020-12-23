#include <stdio.h>


int main(int argc, char const *argv[])
{
    float v1,v2,r;
    int op, repeat_alg, op_alg;
    repeat_alg = 0;
    do{
        printf("Digite o valor 1\n");
        scanf("%f", &v1);

        while(v1<1){
            printf("\033[0;31m Valor invalido, digite novamente\n \033[0m");
            scanf("%f", &v1);        
        }

        printf("Digite o valor 2\n");
        scanf("%f", &v2);

        while(v2<1){
            printf("\033[0;31m Valor invalido, digite novamente\n \033[0m");
            scanf("%f", &v2);        
        }

        printf("Digite a opcao desejada\n");
        printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
        scanf("%d", &op);

        while(op != 1 && op != 2 && op != 3 && op != 4 ){
            printf("\033[0;31m Opcao invalido, digite novamente\n \033[0m");
            scanf("%d", &op);        
        }

        switch (op)
        {
            case 1:
                r = v1 + v2;
                printf("Valor da adicao: %.1f\n", r);
                break;
            case 2:
                r = v1 - v2;
                printf("Valor da subtracao: %.1f\n", r);
                break;
            case 3:
                r = v1 * v2;
                printf("Valor da multiplicao: %.1f\n", r);
                break;
            case 4:
                r = v1 / v2;
                printf("Valor da divisao: %.1f\n", r);
                break;
            default:
                break;
        }
        repeat_alg++;
        printf("\nNovo calculo?\n1 - Sim\n2 - Nao\n");
        scanf("%d", &op_alg);
    } while (op_alg == 1);

    printf("Numero de vezes que o programa rodou: %d\n", repeat_alg);


    return 0;
}
