/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * binaire.c
 */

#include <stdio.h>  
int main(){
  //declaration des variables
  int i;
  int tab[i];
  int nbr = 1024; 
  for(i=0; nbr > 0; i++)  // boucle tant que
  {  
    tab[i] = nbr%2;  //ajoute dans le tableau le reste de la division euclidienne
    nbr = nbr/2;  //récupère le quotient pour continuer la boucle
  } 
  for(i; i != 0; i--)  //boucle tant que
  {  
    printf("%d",tab[i-1]);  //affiche les bits dans le bon sens
  }
  return 0;
}