#include <stdio.h>


int main(int argc, char const *argv[])
{
    float v1, v2, media;
    int op;

    do
    {
        printf("Digite o primeiro valor\n");
        scanf("%f", &v1);

        while (v1 > 10 || v1 <= 0){
            printf("Digite o primeiro valor\n");
            scanf("%f", &v1);
        }

        printf("Digite o segundo valor\n");
        scanf("%f", &v2);

        while (v2 > 10 || v2 <= 0){
            printf("Digite o segundo valor\n");
            scanf("%f", &v2);
        }
        
        media = (v1+v2)/2;
    
        // Cores personalizadas para cada opção
        
        printf("\033[0;36m"); 
        printf("\nO valor da media:%.2f\n\n", media);
        printf("\033[0m");

        // \033[0;36m -> Seta a cor da fonte para ciano
        // \033[0;32m -> Seta a cor da fonte para verde claro
        // \033[0;31m -> Seta a cor da fonte para vermelho
        // \033[0m -> Volta a cor padrão


        printf("Novo calculo? \n \033[0;32m 1-Sim \033[0m \n \033[0;31m 2-Nao \033[0m\n");
        scanf("%d", &op);


    } while (op==1);
    

    return 0;
}
