#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int op=0, age=0,vA,vE,vI,vO,vU;
    char word[30],vowels[]="AEIOUaeiou", name[20], gender, opContinue='Y';

    while (opContinue == 'y' || opContinue == 'Y')
    {   

        printf("\033[0;32m======MENU=======\n");
        printf("|1 - Vogais      |\n");
        printf("|2 - Inverso     |\n");
        printf("|3 - Idade       |\n");
        printf("|4 - Sair        |\n");
        printf("=================\n");
        printf("Selecione uma opção:\n\033[0m");
        setbuf(stdin, NULL);
        scanf("%d", &op);
        
        switch(op){
            case 1:
                vA=vE=vI=vO=vU=0;
                setbuf(stdin, NULL);
                printf("1 - Vowels\n");
                printf("Insert a word, please:\n");
                fgets (word, sizeof(word), stdin);

                for (int index = 0; word[index] != '\0'; ++index)
                {
                    if(word[index] == 65 || word[index] == 97) vA++;
                    else if(word[index] == 69 || word[index] == 101) vE++;
                    else if(word[index] == 73 || word[index] == 105) vI++;
                    else if(word[index] == 79 || word[index] == 111) vO++;
                    else if(word[index] == 85 || word[index] == 117) vU++;
                 
                }
                printf("\033[0;34mThere are %d a vowels \n\033[0m", vA);
                printf("\033[0;34mThere are %d e vowels \n\033[0m", vE);
                printf("\033[0;34mThere are %d i vowels \n\033[0m", vI);
                printf("\033[0;34mThere are %d o vowels \n\033[0m", vO);
                printf("\033[0;34mThere are %d u vowels \n\033[0m", vU);

                
                break;
            case 2:
                printf("2 - Reverse\n");
                printf("Insert a name, please:\n");
                setbuf(stdin, NULL);
                fgets (name, sizeof(name), stdin);

                 int length = strlen(name) - 1 ;
                 for (int index = length; index >= 0; --index)
                 {
                    printf("\033[0;34m%c", name[index]);
                     
                 }
                 printf("\n\033[0m");

                break;
            case 3:
                printf("3 - Age\n");
                printf("Insert a name, please:\n");
                fgets (name, sizeof(name), stdin);
                printf("Choose M or F\n");
                printf("Insert a gender, please\n");
                scanf("%c", &gender);
                printf("and now, insert an age:\n");
                scanf("%d", &age);
                setbuf(stdin, NULL);


                while(age < 0) {
                    printf("Please, insert an valid age:\n");
                    scanf("%d", &age);                    
                }   

                if((gender == 'M' || gender == 'm') && age > 18){
                    int length = strlen(name) - 1 ;
           
                        printf("\033[0;34m%s\n\033[0m", name); 
                }

                break;
            case 4:
                printf("4 - Sair\n");
                printf("Bye bye...\n");
                exit(1);
        }


        printf("\033[0;32m============ SYSTEM MESSAGE ===========\n");
        printf("|Deseja continuar no sistema? [Y/n]    |\n");
        printf("|                                      |\n");
        printf("=======================================\n\033[0m");
        scanf("%c", &opContinue);
        setbuf(stdin, NULL);


    } 
        
    return 0;
}