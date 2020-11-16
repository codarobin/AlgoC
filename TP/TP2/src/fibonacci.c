/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * fibonacci.c
*/
#include<stdio.h>
 
int main()
{
    int n = 5;
    int u[n];
    u[0] = 1;
    u[1] = 1;
    short i;
    printf("U0 = %d\nU1 = %d\n",u[0],u[1]);
    for(i = 2; i < n; i ++)
    {
         u[i] = u[i - 2] + u[i - 1];
         printf("U%d = %d\n",i,u[i]);
    }
     
    return 0;
}
