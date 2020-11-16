/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * étudiant2.c
*/
#include <stdio.h>
#include <string.h>

int main(){
    //Création de la structure
    struct etudiant {
        char nom[120];
        char prenom[120];
        char adresse[120];
        char notes_algo[9];
        char notes_sys[9];
    };

    struct etudiant etudiants[5];
    //Initialisation de la structure
    strcpy(etudiants[0].prenom, "Nabil");
    strcpy(etudiants[0].nom, "Andrieu");
    strcpy(etudiants[0].adresse, "cité des tarterets,91100 Corbeil-Essones");
    strcpy(etudiants[0].notes_sys, "10,15,16");
    strcpy(etudiants[0].notes_algo, "9,15,7");
    
    strcpy(etudiants[1].prenom, "Tarik");
    strcpy(etudiants[1].nom, "Andrieu");
    strcpy(etudiants[1].adresse, "cité des tarterets,91100 Corbeil-Essones");
    strcpy(etudiants[1].notes_sys, "8,12,17");
    strcpy(etudiants[1].notes_algo, "12,18,16");

    strcpy(etudiants[2].prenom, "Chloe");
    strcpy(etudiants[2].nom, "Duchamp");
    strcpy(etudiants[2].adresse, "12 impasse du champs,38200 Vienne");
    strcpy(etudiants[2].notes_sys, "10,11,14");
    strcpy(etudiants[2].notes_algo, "13,11,10");

    strcpy(etudiants[3].prenom, "Christian");
    strcpy(etudiants[3].nom, "Dior");
    strcpy(etudiants[3].adresse, "10 Boulevard Haussman,7500 Paris");
    strcpy(etudiants[3].notes_sys, "14,14,19");
    strcpy(etudiants[3].notes_algo, "11,18,13");

    strcpy(etudiants[4].prenom, "Nicolas");
    strcpy(etudiants[4].nom, "Genaudet");
    strcpy(etudiants[4].adresse, "15 rue de dieu,69100 Villeurbanne");
    strcpy(etudiants[4].notes_sys, "20,13,16");
    strcpy(etudiants[4].notes_algo, "9,15,17");
    // Affichage
    for (int i = 0; i < 5; i++){
        printf("Eleve :\nPrenom: %s\nNom: %s\nAdresse: %s\nNotes Algo en C: %s\nNotes Systèmes D'exploitation: %s\n\n",
               etudiants[i].prenom, etudiants[i].nom, etudiants[i].adresse, etudiants[i].notes_algo, etudiants[i].notes_sys);
        
    }


    return 0;
}
