#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t1,t2,t3,t4, disponible;

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

    disponible = (t1 - 1) + (t2 - 1) + (t3 - 1) + t4;
    
    printf("%d \n", disponible);

    return 0;
}
