#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void checkVowelOrConsonant(char name[]);


int main(int argc, char const *argv[])
{
    char name[50];

    printf("Insira o nome\n");
    scanf("%s", name);
    checkVowelOrConsonant(name);
}


void checkVowelOrConsonant(char name[])
{
    int counterV=0, counterC=0;
    int tam = strlen(name);
    char vowels[tam], consonants[tam];

    for (int index = 0; index < tam; ++index)
    {
        if(name[index] == 'A' || name[index] == 'E' || name[index] == 'I' || name[index] == 'O' || name[index] == 'U' || name[index] == 'a' || name[index] == 'e' || name[index] == 'i' || name[index] == 'o' || name[index] == 'u'){
            vowels[counterV] = name[index];
            counterV++;
        } else {
            consonants[counterC] = name[index];
            counterC++;
        }
    }

    printf("As vogais sao:\n");
    for (int index = 0; index < counterV; ++index)
    {
        printf("%c\n", vowels[index]);
    }
    printf("As consoantes sao:\n");
    for (int index = 0; index < counterC; ++index)
    {
        printf("%c\n", consonants[index]);
    }
}
