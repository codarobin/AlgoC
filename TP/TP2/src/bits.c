#include <stdio.h>  
int main(){
  
  int i;
  int max;
  int tab[i];
  int d = 192484616; 
  for(i=0; d > 0; i++)  
  {  
    tab[i] = d%2;  
    d = d/2;
    max = i;  
  } 
  for(i = max; i != 0; i--)  
  {  
    printf("%d",tab[i]); //chaine de caractère   
  }
  if((tab[max - 3] ) && (tab[max - 19]))
  {
      printf("\n1");
  }
  else
  {
      printf("\n0");
  }
  return 0;
}