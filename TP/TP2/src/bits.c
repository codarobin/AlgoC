#include <stdio.h>  
int main(){
  
  int d = 268443648;
  if (((d >> 4 & 1)) && ((d >> 19 & 1)))
  {
    printf("ok") ;
  }
  else
  {
    printf("non ok") ;
  } 
  return 0;
}