#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int op=0, numberVowel=0, age=0;
    char vowel[30], name[20], gender;

    printf("======MENU=======\n");
    printf("|1 - Vogais      |\n");
    printf("|2 - Inverso     |\n");
    printf("|3 - Idade       |\n");
    printf("|4 - Sair        |\n");
    printf("=================\n");
    printf("Selecione uma opção:\n");
    scanf("%d", &op);
    setbuf(stdin, NULL);
    
        switch(op){
            case 1:
                printf("1 - Vowels\n");
                setbuf(stdin, NULL);
                printf("Insert a word, please:\n");
                fgets (vowel, sizeof(vowel), stdin);

                for (int index = 0; vowel[index + 1] != '\0'; ++index)
                {
                    if(vowel[index] =='A' || vowel[index]=='E' || vowel[index] =='I' || vowel[index] =='O' || vowel[index] =='U' || vowel[index] =='a' || vowel[index] =='e' || vowel[index] =='i' || vowel[index] =='o' || vowel[index] =='u'){
                        numberVowel++;
                    }
                }
                printf("There are %d vowels \n", numberVowel);

                
                break;
            case 2:
                printf("2 - Reverse\n");
                printf("Insert a name, please:\n");
                setbuf(stdin, NULL);
                fgets (name, sizeof(name), stdin);

                 int length = strlen(name) - 1 ;
                 for (int index = length; index >= 0; --index)
                 {
                    printf("%c", name[index]);
                     
                 }
                 printf("\n");

                break;
            case 3:
                printf("3 - Age\n");
                printf("Insert a name, please:\n");
                fgets (name, sizeof(name), stdin);
                printf("Choose M or F\n");
                printf("Insert a gender, please:\n");
                scanf("%c", &gender);
                printf("and now, insert an age:\n");
                scanf("%d", &age);

                while(age < 0) {
                    printf("Please, insert an valid age:\n");
                    scanf("%d", &age);                    
                }   

                if(gender == 'M' || gender == 'm' && age > 18){
                    int length = strlen(name) - 1 ;
                    for (int index = 0; index < length; ++index)
                    {
                        printf("%c", name[index]); 
                    }
                    printf("\n");

                }

                break;
            case 4:
                printf("4 - Sair\n");
                printf("Bye bye...\n");
                exit(1);
        }
        
    return 0;
}