/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * condition.c
 */

#include <stdio.h>
int main()
{
    int i ;
    for ( i = 0; i < 1000; i++)
    {
        if (i % 2 == 0 && i % 15 == 0) //test si i est divisible par 2 et 15
        {
            printf("%d est divisible par 2 et 15\n", i); // affiche si i est divisible par 2 et 15
        }
        if (i % 103 == 0 || i % 107 == 0) //test si i est divisible par 103 ou 107
        {
            printf("%d est divisible par 103 ou par 107\n", i);//affiche si i est divisible par 103 ou 107
        }
        if ((i % 7 == 0 || i % 5 == 0) && i % 3 != 0)// test si i est divisible par 7 ou 5, et non divisible par 3
        {
            printf("%d est divisible par 7 ou par 5 mais pas par 3\n", i);// affiche si i est divisible par 7 ou 5, et non divisible par 3
        }  
    }
    return 0;
}
