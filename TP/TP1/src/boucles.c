/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * boucle.c
 */
#include <stdio.h>

int main() {

    int compter = 5;

    if (compter < 4){
        printf("Merci de spécifier un compteur > à 4.\n");
        return 1;
    }
    // Ligne 
    for (int l = 0; l < compter; l++){

        // Si la prochine ligne est la dernière ligne.
        // Afficher des * pour fermer le triangle
        if((l+1) >= compter){
            int i = 0;
            while( i < compter){
                printf("* ");
                i++;
            }
            printf("\n");
        } else {
        // Colones (rows) 
        // On écrit les colones tant que r est suppérieur à compter - l'index de la ligne 
        // Si c'est la première ou la dernièere cellule : afficher une * sinon afficher un #
        for (int r = compter; r >= (compter - l); r--){
            if (((r + 1) > compter) || (r <= (compter-l))) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
        }
    }

    return 0;
}
