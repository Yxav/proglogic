#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x, y;

    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0){
        printf("Origem\n");
    }

    if (y > 0){
        if (x>0)
        {
            printf("Q1\n");
        }
        if (x<0)
        {
            printf("Q2\n");
        }
    }

    if (y < 0){
        if (x>0)
        {
            printf("Q4\n");
        }
        if (x<0)
        {
            printf("Q3\n");
        }
    }

    return 0;
}
