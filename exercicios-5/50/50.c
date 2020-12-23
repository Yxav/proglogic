#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vote, chapa_situacao, chapa_mod, votos_branco, votes_num;
    chapa_situacao = 0;
    chapa_mod = 0;
    votos_branco = 0;
    votes_num = 0;

    do{
    
        printf("Digite o seu voto:\n1 - Chapa Situacao\n2 - Chapa Modificacao\n3 - Voto em Branco\n");
        scanf("%d", &vote);
        
        while (vote != 1 && vote != 2 && vote != 3){
            printf("\033[0;31m Voto invalido, digite novamente\n \033[0m");
            scanf("%d", &vote);
        }

        if (vote == 1){
            chapa_situacao++;
        } 
        if (vote == 2){
            chapa_mod++;
        }
        if (vote == 3){
            votos_branco++;
        }
        votes_num++;
    } while (votes_num<100);
    
    if (chapa_situacao > chapa_mod && chapa_situacao > votos_branco){
        printf("Chapa Situacao venceu com %d votos\n", chapa_situacao);
    } else {
        if (chapa_mod>chapa_situacao && chapa_mod>votos_branco){
            printf("Chapa Modificacao venceu com %d votos\n", chapa_mod);
        } else {
            printf("Nao houve vencedores\n");
        }
    }

    return 0;
}
