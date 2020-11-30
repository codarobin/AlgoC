/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * couleur.c
*/
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* srand, rand */
int main(){
    //Création de la structure
    typedef struct {
        char r;
        char g;
        char b;
        char a;
        int doublon_deja_detecte;
        int compteur;
    }couleur;
    //Déclaration du tableau
    couleur couleurs_tab[100];
    //Initialisation du tableau
    for (int i = 0; i < 100; i++)
    {
        couleurs_tab[i].r=rand()%250;
        couleurs_tab[i].g=rand()%250;
        couleurs_tab[i].b=rand()%250;
        couleurs_tab[i].a=rand()%250;
        couleurs_tab[i].doublon_deja_detecte = 0;
        couleurs_tab[i].compteur = 1;
    }

        couleurs_tab[0].r=5;
        couleurs_tab[0].g=5;
        couleurs_tab[0].b=5;
        couleurs_tab[0].a=5;
        couleurs_tab[0].doublon_deja_detecte = 0;
        couleurs_tab[0].compteur = 1;

        couleurs_tab[1].r=5;
        couleurs_tab[1].g=5;
        couleurs_tab[1].b=5;
        couleurs_tab[1].a=5;
        couleurs_tab[1].doublon_deja_detecte = 0;
        couleurs_tab[1].compteur = 1;

        couleurs_tab[2].r=5;
        couleurs_tab[2].g=5;
        couleurs_tab[2].b=5;
        couleurs_tab[2].a=5;
        couleurs_tab[2].doublon_deja_detecte = 0;
        couleurs_tab[2].compteur = 1;

    //Affichage du tableau
for (int i = 0; i < 100; i++) {
        // Skip si couleur déjà comptée
        if (couleurs_tab[i].doublon_deja_detecte == 0) {
            for (int j = i + 1; j < 100; j++) {
                if (couleurs_tab[i].r == couleurs_tab[j].r &&
                    couleurs_tab[i].g == couleurs_tab[j].g &&
                    couleurs_tab[i].b == couleurs_tab[j].b &&
                    couleurs_tab[i].a == couleurs_tab[j].a) {

                    // Si il y a un doublon, incrémenter les occurences et marqué comme compté.
                    couleurs_tab[i].compteur++;
                    couleurs_tab[j].doublon_deja_detecte = 1;
                }
            }
            // Afficher la couleur et passer à la suivante

            printf("%hhx %hhx %hhx %hhx Count=%d\n",couleurs_tab[i].r,couleurs_tab[i].g,couleurs_tab[i].b,couleurs_tab[i].a,couleurs_tab[i].compteur);
        }
    }
    
    return 0;
}