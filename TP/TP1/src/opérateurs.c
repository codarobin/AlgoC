/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * opérateurs.c
 */

#include <stdio.h>
int main(){
    
    int a = 16;
    int b = 3;

    printf("a + b = %d\n", a + b);//addition
    printf("a - b = %d\n", a - b);//soustraction
    printf("a * b = %d\n", a * b);//multiplication
    printf("a / b = %d\n", a / b);//division
    printf("a %% b = %d\n", a % b);//modulo

    if (a > b){// test si a est plus grand que b
        printf("a > b\n");// affcihe si a est plus grand que b
    }

    if (a >= b){// test si a est plus grand ou égal à b
        printf("a >= b\n");// affiche si a est plus grand ou égal à b
    }


    if (b < a){// test si b est plus petit que a
        printf("b < a\n");// affiche si b est plus petit que a
    }


    if (b <= a){// test si b est inferieur ou égal à a
        printf("b <= a\n");// affiche si b est inferieur ou égal à a
    }


    if (a != b){// test si a est différent de b
        printf("a != b\n");// affiche si a est différent de b
    }


    return 0;
}
