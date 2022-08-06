#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 100;

int main(){
    int i, acak;
    i = 0;

    srand(time(0));
    while (i < N)
    {
        acak = rand() % N + 1;
        printf("%d ", acak);
        i++;
    }

    printf("\n");
}