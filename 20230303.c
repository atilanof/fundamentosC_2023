/*
 * Generación de números aleatorios entre dos números
 * 
 * 
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIM_INF 1
#define LIM_SUP 1000

int main(int argc, char **argv)
{
	int i;
    double aleatorio;
    //Semilla
    srand((unsigned)time(NULL));
    printf("\n%d\n",RAND_MAX);
    for (i=0;i<300;i++) {
        aleatorio=LIM_INF+rand()%(LIM_SUP-LIM_INF+1);
        printf("%f\n",aleatorio);
    }
	return 0;
}
