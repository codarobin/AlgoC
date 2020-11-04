/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * cercle.c
 */

#include <stdio.h>
#include <math.h>
 //variables
double rayon = 4 ;

int main()
{
    float air = M_PI*(rayon*rayon); //calcul de l'air
    printf("l'air du cercle est %f\n",air); //affiche l'air
    float perimetre = 2*M_PI*rayon; //calcul le perimetre
    printf("le périmètre du cercle est %f\n",perimetre);//affiche le perimetre
    return 0;
}