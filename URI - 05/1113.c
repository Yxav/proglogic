#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v1,v2;


    while (v1 != v2)
    {
    scanf("%d %d", &v1, &v2);

    if(v2<v1){
        printf("Decrescente\n");
    }
    if(v1<v2) {
        printf("Crescente\n");
    }
    }
    



    return 0;
}
