/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * variables.c
 */

#include <stdio.h>
int main(){

    //déclaration des variables
    int i = -3;
    long int li = -12341324129;
    long long int lli = -120415240404299;
    short sh = -15454;
    
    unsigned short ush = 12345;
    unsigned int ui = 8;
    unsigned long int uli = 145243446;
    unsigned long long int ulli = 124654456;

    char ch = 'b';
    unsigned char uch = 'u';

    float f = 0.222222;

    double dou = 0.344243534566;
    long double ldou = 0.34845435453434354;

    //affichage des variables
    printf("Int: %d\n", i);
    printf("Long Int: %ld\n", li);
    printf("Long Long Int: %lld\n", lli);
    printf("Short: %d\n", sh);

    printf("Unsigned Short: %d\n", ush);
    printf("Unsigned Int: %d\n", ui);
    printf("Unsigned Long Int: %ld\n", uli);
    printf("Unsigned Long Long Int: %lld\n", ulli);

    printf("Char: %c\n", ch);
    printf("Unsigned Char: %c\n", uch);

    printf("Float: %f\n", f);
    printf("Double: %g\n", dou);
    printf("Long Double: %Lg\n", ldou);

    return 0;
}
