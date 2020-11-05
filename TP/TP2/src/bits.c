#include <stdio.h>  
int main(){
  
  int mask = 268439552;
  int d = 268439552;
  if (d & mask)
  {
    printf("ok");
  }
  else
  {
    printf("nok");
  }
  
  return 0;
}