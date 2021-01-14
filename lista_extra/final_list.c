#include <stdio.h>

int main(int argc, char const *argv[])
{
	int opcode, type, quant_alunos, op_code_alt, pass, c=0;
	float quantity, total, media, nota, notas=0, alt_hom, alt_mul, total_hom=0, total_mul=0, media_homem, media_mulher, h,m;


	printf("\033[0;33m BEM-VINDO Á MAQUINA DE EXERCICIOS \033[0m\n\n");
	printf("Digite uma opçao de acordo com a legenda do exercicio desejado:\n");
	printf(" \033[0;36m1 - Ler notas de alunos\n 2 - Desconto de combustível\n 3 - Media de alturas\n 4 - Verificacao de senha\n 5 - Desconto de veiculo \033[0m \n");
	printf("Digite uma opçao de acordo com a legenda do exercicio desejado: \n");

	scanf("%d", &opcode);



	switch(opcode){
		case 1: 
			printf("\033[0;33m Exercicio: Ler notas de alunos \033[0m\n\n");
			
			printf("Digite a quantidade de litros vendidos\n");
			scanf("%f", &quantity);

			while(quantity<0){
				printf("\033[0;31m Quantidade invalida, digite novamente \033[0m\n");
				scanf("%f", &quantity);				
			}

			printf("Escolha o combustivel:\n 1 - Alcool \n 2 - Gasolina\n");
			scanf("%d", &type);

			if (type==1){
				total = quantity * 4.65;
			} else {
				if (type==2){
					total = quantity * 4.15;	
				} else {
					printf("\033[0;31m Opcao Invalida \033[0m\n");
				}
			}

			printf(" \033[0;32m O valor dos litros vendidos e: R$ %.2f\n",total);
			break;

		case 2:
			printf("\033[0;33m Exercicio: Desconto de combustível \033[0m\n\n");
			
			printf("Digite a quantidade dos alunos\n");
			scanf("%d", &quant_alunos);

			for (int i = 0; i < quant_alunos; ++i)
			{
				printf("Digite a nota\n");
				scanf("%f", &nota);
				while(nota <= 0 && nota >=10){
					printf("\033[0;31m Nota invalida, digite novamente\n\033[0m");
					scanf("%f", &nota);
				}
				notas += nota;
			}

			media = notas/quant_alunos;

			printf("A media da turma e %.2f:", media);
			break;

		case 3:
			printf("\033[0;33m Exercicio: Media de alturas \033[0m\n\n");
				for (int i = 1; i <= 20; ++i)
			{
				printf("Digite uma opcao: \n1 - Masculino\n2 - Feminino\n");
				scanf("%d", &op_code_alt);

				if (op_code_alt == 1){
					printf("Digite a altura\n");
					scanf("%f", &alt_hom);
					total_hom += alt_hom;
					h++;
				} else { 
					if (op_code_alt == 2){
					printf("Digite a altura\n");
					scanf("%f", &alt_mul);
					total_mul += alt_mul;
					m++;
					} else {
						printf("\033[0;31m Opcao invalida\n \033[0m");
					}
				}
		}
			media_homem = total_hom / h;
			media_mulher = total_mul/ m;
			printf("\033[0;32mA media de altura dos homens e: %.2f\n", media_homem);
			printf("A media de altura das mulheres e: %.2f\n\033[0m", media_mulher);
			break;
		
		case 4:
			printf("\033[0;33m Exercicio: Verificacao de senha \033[0m\n\n");
			printf("Digite a senha\n");
			scanf("%d", &pass);

			while(pass != 600121){
			printf("\033[0;31m ACESSO NEGADO\n\033[0m");
			scanf("%d", &pass);
			c++;
			if (c==5){
				printf("\033[0;31m Senha bloqueada\n \033[0m");
				break;
				}
			} if (pass == 600121){
				printf("\033[0;32m ACESSO PERMITIDO \033[0m\n");
			}
			break;

		case 5:
			printf("\033[0;33m Exercicio: Desconto de veiculo \033[0m\n\n");
			break;

	}



	return 0;
}