#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c=10;

    do {
        printf("%d\n", c);
        c = c - 1;
    } while (c >= 1);

    return 0;
}
