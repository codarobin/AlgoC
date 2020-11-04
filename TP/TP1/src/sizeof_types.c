/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * sizeof_types.c
 */

// sizeof: la taille de différents types de données

#include <stdio.h>

int main(){

    printf("Char : %ld octets\n", sizeof(char)); //affiche la taille de "char"
    printf("Unsigned Char : %ld octets\n", sizeof(unsigned char));//affiche la taille de "unsigned char"
    
    printf("Short : %ld octets\n", sizeof(short));//affiche la taille de "short"
    printf("Unsigned Short : %ld octets\n", sizeof(unsigned short));//affiche la taille de "unsigned short"
    
    printf("Int : %ld octets\n", sizeof(int));//affiche la taille de "int"
    printf("Unsigned Int : %ld octets\n", sizeof(unsigned int));//affiche la taille de "unsigned int"
    
    printf("Long Int : %ld octets\n", sizeof(long int));//affiche la taille de "long int"
    printf("Unsigned Long Int : %ld octets\n", sizeof(unsigned long int));//affiche la taille de "unsigned long int"
    
    printf("Long Long Int : %ld octets\n", sizeof(long long int));//affiche la taille de "long long int"
    printf("Unsigned Long Long Int : %ld octets\n", sizeof(unsigned long long int));//affiche la taille de "unsigned long long int"
    
    printf("Float : %ld octets\n", sizeof(float));//affiche la taille de "float"
    
    printf("Double : %ld octets\n", sizeof(double));//affiche la taille de "double"
    
    printf("Long Double : %ld octets\n", sizeof(long double));//affiche la taille de "long double"

    return 0;
}

