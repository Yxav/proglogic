#include <stdio.h>

void checkVowel(char vowel);


int main(int argc, char const *argv[])
{
	char vowel;

	printf("Insira a letra\n");
	scanf("%c", &vowel);
	checkVowel(vowel);
}


void checkVowel(char vowel){

	if(vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U' || vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u') printf("1 \n");
	else printf("0 \n");

}