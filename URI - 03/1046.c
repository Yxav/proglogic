#include <stdio.h>

int main(int argc, char const *argv[])
{
    int start_time, end_time, time_aux, total_time;

    scanf("%d %d", &start_time, &end_time);

    if (start_time == end_time){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    if (start_time > end_time) {
        time_aux = 24 - start_time;
        total_time = time_aux + end_time;
        printf("O JOGO DUROU %d HORA(S)\n", total_time);
    }

    if (start_time < end_time) {
        total_time = end_time - start_time;
        printf("O JOGO DUROU %d HORA(S)\n", total_time);
    
    }
    return 0;
}
