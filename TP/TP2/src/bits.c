#include <stdio.h>  
int main(){
  
  int d = 268439552;
  if (((d >> 28 & 1)) && ((d >> 12 & 1)))
  {
    printf("ok") ;
  }
  else
  {
    printf("non ok") ;
  } 
  return 0;
}