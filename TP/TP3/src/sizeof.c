/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * sizeof.c
*/
#include <stdio.h>  
int main(){
  
printf("int : %lu octets\n", sizeof (int)); // affichage du nombre d'octet d'une variable int
printf("int * : %lu octets\n", sizeof (int *)); // affichage du nombre d'octet d'une adresse d'une variable int
printf("int **: %lu octets\n", sizeof (int **)); // affichage du nombre d'octet de l'adresse de l'adresse d'une variable int
printf("char * : %lu octets\n", sizeof (char *)); // affichage du nombre d'octet d'une adresse d'une variable char
printf("char ** : %lu octets\n", sizeof (char **)); // affichage du nombre d'octet de l'adresse de l'adresse d'une variable char
printf("char *** : %lu octets\n", sizeof (char ***)); // affichage du nombre d'octet de l'adresse de l'adresse de l'adresse d'une variable int
printf("float * : %lu octets\n", sizeof (float *)); // affichage du nombre d'octet d'une variable float
printf("float ** : %lu octets\n", sizeof (float **)); // affichage du nombre d'octet de l'adresse de l'adresse d'une variable float
printf("float *** : %lu octets\n",sizeof (float ***)); // affichage du nombre d'octet de l'adresse de l'adresse de l'adresse d'une variable float
  return 0;
}
