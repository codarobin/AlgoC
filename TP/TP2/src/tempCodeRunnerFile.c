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
    couleurs_tab[0].r = (char) 12;
    couleurs_tab[0].g = (char) 56;
    couleurs_tab[0].b = (char) 84;
    couleurs_tab[0].a = (char) 152;
    
    couleurs_tab[1].r = (char) 13;
    couleurs_tab[1].g = (char) 6;
    couleurs_tab[1].b = (char) 44;
    couleurs_tab[1].a = (char) 52;

    couleurs_tab[2].r = (char) 2;
    couleurs_tab[2].g = (char) 58;
    couleurs_tab[2].b = (char) 14;
    couleurs_tab[2].a = (char) 178;

    couleurs_tab[3].r = (char) 142;
    couleurs_tab[3].g = (char) 86;
    couleurs_tab[3].b = (char) 74;
    couleurs_tab[3].a = (char) 12;

    couleurs_tab[4].r = (char) 22;
    couleurs_tab[4].g = (char) 136;
    couleurs_tab[4].b = (char) 64;
    couleurs_tab[4].a = (char) 11;

    couleurs_tab[5].r = (char) 1;
    couleurs_tab[5].g = (char) 63;
    couleurs_tab[5].b = (char) 77;
    couleurs_tab[5].a = (char) 52;

    couleurs_tab[6].r = (char) 25;
    couleurs_tab[6].g = (char) 32;
    couleurs_tab[6].b = (char) 84;
    couleurs_tab[6].a = (char) 112;

    couleurs_tab[7].r = (char) 56;
    couleurs_tab[7].g = (char) 49;
    couleurs_tab[7].b = (char) 144;
    couleurs_tab[7].a = (char) 182;

    couleurs_tab[8].r = (char) 99;
    couleurs_tab[8].g = (char) 6;
    couleurs_tab[8].b = (char) 88;
    couleurs_tab[8].a = (char) 192;

    couleurs_tab[9].r = (char) 172;
    couleurs_tab[9].g = (char) 76;
    couleurs_tab[9].b = (char) 164;
    couleurs_tab[9].a = (char) 121;    

    //Affichage du tableau
    for (size_t i = 0; i < 10; i++)
    {
        printf("%hhx %hhx %hhx %hhx\n",couleurs_tab[i].r,couleurs_tab[i].g,couleurs_tab[i].b,couleurs_tab[i].a);
    }
    
    return 0;
}