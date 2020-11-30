/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * tri.c
*/
#include <stdio.h>
#include <stdlib.h> 
//fonction qui trie le tableau par ordre croissant
void ordonnerTableau(int tableau[], int tailleTableau)
{
int i,t,k=0;

for(t = 0; t < tailleTableau; t++)
{
for(i=0; i < tailleTableau - 1; i++)
{
if(tableau[i] > tableau[i+1]) // si la valeure de tableau[i] est superieur à celle de tableau[i+1]
{
k= tableau[i] - tableau[i+1]; // on calcule la différence
tableau[i] -= k; //on soustrait la différence à tableau[i]
tableau[i+1] += k; // et on l'ajoute à tableau[i+1] pour inverser les valeures
}
}
}
}

int main()
{
    //déclaration du tableau
int tab[100];
//initialisation du tableau
for (int i = 0; i < 100; i++)
    {
        int valeur=rand()%100;
        tab[i]=valeur;
    }
//appel de la fonction avec paramètre
ordonnerTableau(tab,100);
//affichage du résultat
for(int i=0; i<100; i++)
{
printf("%d\n",tab[i]);
}
return 0;
}


