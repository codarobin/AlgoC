#include <stdio.h>  
int main(){
  
  int i;
  int tab[i];
  int nbr = 1024; 
  for(i=0; nbr > 0; i++)  
  {  
    tab[i] = nbr%2;  
    nbr = nbr/2;  
  } 
  for(i; i != 0; i--)  
  {  
    printf("%d",tab[i-1]);  
  }
  return 0;
}