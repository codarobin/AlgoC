#include <stdio.h>
#include <math.h>
 //variables
double rayon = 4 ;

int main()
{
    float air = M_PI*(rayon*rayon);
    printf("l'air du cercle est %f\n",air);
    float perimetre = 2*M_PI*rayon;
    printf("le périmètre du cercle est %f\n",perimetre);
    return 0;
}