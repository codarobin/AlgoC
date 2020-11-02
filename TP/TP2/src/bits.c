#include <stdio.h>  
int main(){
  
  int i;
  int max;
  int tab[i];
  int nbr = 192484616; 
  for(i=0; nbr > 0; i++)  
  {  
    tab[i] = nbr%2;  
    nbr = nbr/2;
    max = i;  
  } 
  for(i = max; i != 0; i--)  
  {  
    printf("%d",tab[i]); //chaine de caractère   
  }
  if(tab[max - 3] == 1)
  {
      if (tab[max - 19] == 1)
      {
          printf("\n1");
      }
      else
      {
          printf("\n0");
      }
  }
  else
  {
      printf("\n0");
  }
  return 0;
}