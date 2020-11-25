#include <stdio.h>

int main(int argc, char const *argv[])
{
    int s,t,f, time_arrived;

    scanf("%d %d %d", &s,&t,&f);

    time_arrived = s+t+f;

    if (time_arrived > 24) {
        time_arrived -= 24;
    }
    if (time_arrived < 0){
        time_arrived += 24;
    }



    printf("%d\n", time_arrived);


    return 0;
}
