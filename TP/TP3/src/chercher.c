/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * chercher.c
*/
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* srand, rand */
#define SIZE 100 // définition de la taille du tableau
int main ()
{
    // déclaration du tableau
    int tableau[SIZE];
    int *p=tableau;
    // déclaration des valeure MIN et MAX
    int max=0;
    int min=100;
    // déclaration du nombre cherché
    int nbchercher=45;
    //boucle qui parcour le tableau
    for (int i = 0; i < 100; i++)
    {
        // initialisation du tableau
        int valeur=rand()%100;
        p[i]=valeur;
        if (p[i] == nbchercher) // si p[i] est égale à la valeure cherché
        {
            printf("entier présent\n"); // on affiche que l'entier est présent
        }  
    }
  return 0;
}
