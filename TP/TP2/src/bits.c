#include <stdio.h>  
int main(){
  
  int d = 524304;
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