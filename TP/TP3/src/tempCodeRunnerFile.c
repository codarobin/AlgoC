#include <stdio.h>
#include <stdlib.h> 

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
 /* Déclarations */
 int tab[100]; /* tableau donné */
 int VAL=92;   /* valeur à rechercher   */
 int POS;   /* position de la valeur */
 int N = 100;     /* dimension      */
 int I;     /* indice courant */
 int INF, MIL, SUP; /* limites du champ de recherche */
 

for (int i = 0; i < 100; i++)
    {
        int valeur=rand()%100;
        tab[i]=valeur;
    }

ordonnerTableau(tab,100);

 /* Initialisation des limites du domaine de recherche */
 INF=0;
 SUP=N-1;
 /* Recherche de la position de la valeur */
 POS=-1;
 while ((INF<=SUP) && (POS==-1))
        {
         MIL=(SUP+INF)/2;
         if (VAL < tab[MIL])
               SUP=MIL-1;
         else if (VAL > tab[MIL])
               INF=MIL+1;
         else
               POS=MIL;
        }
 
  /* Edition du résultat */
 if (POS==-1)
     printf("La valeur recherchée ne se trouve pas "
            "dans le tableau.\n");
 else
     printf("La valeur %d se trouve à la position %d. \n",
 VAL, POS);
 return 0;
}