/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * étudiant.c
*/
#include <stdio.h>
#include <string.h>

int main(){

    char prenom[5][30] = {
            "Nabil",
            "Tarik",
            "Chloe",
            "Christian",
            "Nicolas"
    };
    char nom[5][30] = {
            "Andrieu",
            "Andrieu",
            "Duchamp",
            "Dior",
            "Genaudet"
    };
    char adresse[5][120] = {
            "cité des tarterets,91100 Corbeil-Essones",
            "cité des tarterets,91100 Corbeil-Essones",
            "12 impasse du champs,38200 Vienne",
            "10 Boulevard Haussman,7500 Paris",
            "15 rue de dieu,69100 Villeurbanne",
    };
    char notes_C[5][30] = {
            "10,15,16",
            "8,12,17",
            "10,11,14",
            "14,14,19",
            "20,13,16",
    };
    char notes_OS[5][30] = {
            "9,15,7",
            "12,18,16",
            "13,11,10",
            "11,18,13",
            "9,15,17"
    };

    // affichage
    for (int i = 0; i < 5; i++){
            printf("Eleve :\nPrenom: %s\nNom: %s\nAdresse: %s\nNotes Algo en C: %s\nNotes Systèmes D'exploitation: %s\n\n",
                   prenom[i], nom[i], adresse[i], notes_C[i], notes_OS[i]);
    }


    return 0;
}
