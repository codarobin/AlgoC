#include<stdio.h>
#include<string.h>
int main()
{
  char chaine1[100] = "salut ", chaine2[100] = "ca va ?", chaine3[100];
 
  strcat(chaine1, chaine2); //concatenation de deux chaines 
  int longueur = strlen(chaine1);
 
  printf("Aprés la concaténation = %s\n", chaine1);
  printf("La longueur de la chaine %s est de %d caractères",chaine1,longueur);
 
  return 0;
}