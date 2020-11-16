/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://gitlab.com/bat553/cpe_algoc
 * etudiant2.c
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
    couleur couleurs_tab[10];
    couleurs_tab[0].r = 10;
    couleurs_tab[0].g = 10;
    couleurs_tab[0].b = 10;
    couleurs_tab[0].a = 10;

    couleurs_tab[0].r = 10;
    couleurs_tab[0].g = 10;
    couleurs_tab[0].b = 10;
    couleurs_tab[0].a = 10;
    for (size_t i = 0; i < 10; i++)
    {
        printf("%hhx %hhx %hhx %hhx\n",couleurs_tab[i].r,couleurs_tab[i].g,couleurs_tab[i].b,couleurs_tab[i].a);
    }
    
    return 0;
}