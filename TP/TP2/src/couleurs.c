/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * couleur.c
*/
#include <stdio.h>
#include <string.h>
int main(){
    //Création de la structure
    typedef struct {
        char r;
        char g;
        char b;
        char a;

    }couleur;
    //Déclaration du tableau
    couleur couleurs_tab[10];
    //Initialisation du tableau
    couleurs_tab[0].r = 12;
    couleurs_tab[0].g = 56;
    couleurs_tab[0].b = 84;
    couleurs_tab[0].a = 152;
    
    couleurs_tab[1].r = 13;
    couleurs_tab[1].g = 6;
    couleurs_tab[1].b = 44;
    couleurs_tab[1].a = 52;

    couleurs_tab[2].r = 2;
    couleurs_tab[2].g = 58;
    couleurs_tab[2].b = 14;
    couleurs_tab[2].a = 178;

    couleurs_tab[3].r = 142;
    couleurs_tab[3].g = 86;
    couleurs_tab[3].b = 74;
    couleurs_tab[3].a = 12;

    couleurs_tab[4].r = 22;
    couleurs_tab[4].g = 136;
    couleurs_tab[4].b = 64;
    couleurs_tab[4].a = 11;

    couleurs_tab[5].r = 1;
    couleurs_tab[5].g = 63;
    couleurs_tab[5].b = 77;
    couleurs_tab[5].a = 52;

    couleurs_tab[6].r = 25;
    couleurs_tab[6].g = 32;
    couleurs_tab[6].b = 84;
    couleurs_tab[6].a = 112;

    couleurs_tab[7].r = 56;
    couleurs_tab[7].g = 49;
    couleurs_tab[7].b = 144;
    couleurs_tab[7].a = 182;

    couleurs_tab[8].r = 99;
    couleurs_tab[8].g = 6;
    couleurs_tab[8].b = 88;
    couleurs_tab[8].a = 192;

    couleurs_tab[9].r = 172;
    couleurs_tab[9].g = 76;
    couleurs_tab[9].b = 164;
    couleurs_tab[9].a = 121;    

    //Affichage du tableau
    for (size_t i = 0; i < 10; i++)
    {
        printf("%hhx %hhx %hhx %hhx\n",couleurs_tab[i].r,couleurs_tab[i].g,couleurs_tab[i].b,couleurs_tab[i].a);
    }
    
    return 0;
}