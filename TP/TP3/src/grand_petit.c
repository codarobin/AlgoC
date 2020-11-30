/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * grand_petit.c
*/
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* srand, rand */
#define SIZE 100
int main ()
{
    // déclaration du tableau
    int tableau[SIZE];
    int *p=tableau;
    // déclaration des valeure MIN et MAX
    int max=0;
    int min=100;
    // boucle qui parcour les éléments du tableau
    for (int i = 0; i < 100; i++)
    {
        //initialisation du tableau
        int valeur=rand()%100;
        p[i]=valeur;
        if (p[i] > max) //si p[i] est plus grand que la valeure maximal 
        {
            max=p[i]; // alors la valeur maximal devient p[i]
        }
        else if (p[i] < min) // si p[i] est plus petit que la valeure minimale
        {
            min=p[i]; // alors la valeure minimale devient p[i]
        }
           
    }
  //affiche le résultat
  printf("La valeur maximal du tableau est : %d\nLa valeur minimum du tableau est : %d\n",max,min);
  return 0;
}
