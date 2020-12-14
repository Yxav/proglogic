#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h1,h2,m1,m2,aux, total1, total2;
    
    printf("Digite a idade dos homens:\n");
    scanf("%d %d", &h1, &h2);

    printf("Digite a idade das mulheres:\n");
    scanf("%d %d", &m1, &m2);

    if (h2>h1){
        aux = h1;
        h1 = h2;
        h2 = aux;
    } 
    
    if (m2>m1){
        aux = m1;
        m1 = m2;
        m2 = aux;
    }   

    
    printf("%d\n", h1+m2);
    printf("%d\n", h2*m1);

    return 0;
}
