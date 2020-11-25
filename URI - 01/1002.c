#include <stdio.h>

int main(int argc, char const *argv[])
{
    float r,a;

    scanf("%f", &r);
    a = (r * r) * 3.14159;
    printf("A = %0.4f\n", a);
    return 0;
}
