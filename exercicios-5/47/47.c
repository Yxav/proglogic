#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;

    do {
        c = c + 1;
        printf("%d\n", c);
    } while (c < 10);

    return 0;
}
