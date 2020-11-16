/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * ptrvariables.c
*/
#include <stdio.h>

int i = -5;
long int li = -1554534375;
long long int lli = -123434567658945;
short sh = -13684;

unsigned short ush = 0x2354;
unsigned int ui = 0x9;
unsigned long int uli = 0x0123456789abcdef;
unsigned long long int ulli = 0xAAFFFFFFFFFFFFBB;

char ch = 'b';
unsigned char uch = 'u';

float f = 0.111111;

double dou = 0.34456454566;
long double ldou = 0.34843084384398439843;

int main(){


    int* ptri = &i;
    long int* ptrli = &li;
    long long int* ptrlli = &lli;
    short* ptrsh = &sh;

    unsigned short* ptrush = &ush;
    unsigned int* ptrui = &ui;
    unsigned long int* ptruli = &uli;
    unsigned long long int* ptrulli = &ulli;

    char* ptrch = &ch;
    unsigned char* ptruch = &uch;

    float* ptrf = &f;

    double* ptrdou = &dou;
    long double* ptrldou = &ldou;

    printf("Addr: %p - Int: %d\n", ptri, *ptri);
    printf("Addr: %p - Long Int: %ld\n", ptrli, *ptrli);
    printf("Addr: %p - Long Long Int: %lld\n", ptrlli, *ptrlli);
    printf("Addr: %p - Short: %d\n", ptrsh, *ptrsh);

    printf("Addr: %p - Unsigned Short: %d\n", ptrush, *ptrush);
    printf("Addr: %p - Unsigned Int: %u\n", ptrui, *ptrui);
    printf("Addr: %p - Unsigned Long Int: %lu\n", ptruli, *ptruli);
    printf("Addr: %p - Unsigned Long Int: %lu\n", ptruli, *ptruli);

    printf("Addr: %p - Unsigned Long Long Int: %llu\n", ptrulli, *ptrulli);

    printf("Addr: %p - Char: %c\n", ptrch, *ptrch);
    printf("Addr: %p - Unsigned Char: %c\n", ptruch, *ptruch);

    printf("Addr: %p - Float: %f\n", ptrf, *ptrf);
    printf("Addr: %p - Double: %g\n", ptrdou, *ptrdou);
    printf("Addr: %p - Long Double: %Lg\n", ptrldou, *ptrldou);
    return 0;
}
