// sizeof: la taille de différents types de données

#include <stdio.h>

int main(){

    printf("Char : %ld octets\n", sizeof(char));
    printf("Unsigned Char : %ld octets\n", sizeof(unsigned char));
    
    printf("Short : %ld octets\n", sizeof(short));
    printf("Unsigned Short : %ld octets\n", sizeof(unsigned short));
    
    printf("Int : %ld octets\n", sizeof(int));
    printf("Unsigned Int : %ld octets\n", sizeof(unsigned int));
    
    printf("Long Int : %ld octets\n", sizeof(long int));
    printf("Unsigned Long Int : %ld octets\n", sizeof(unsigned long int));
    
    printf("Long Long Int : %ld octets\n", sizeof(long long int));
    printf("Unsigned Long Long Int : %ld octets\n", sizeof(unsigned long long int));
    
    printf("Float : %ld octets\n", sizeof(float));
    
    printf("Double : %ld octets\n", sizeof(double));
    
    printf("Long Double : %ld octets\n", sizeof(long double));

    return 0;
}

