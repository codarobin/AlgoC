#include <stdio.h>
int main(){

    int i = -3;
    long int li = -123455678989;
    long long int lli = -123434567678899;
    short sh = -15454;
    
    unsigned short ush = 12345;
    unsigned int ui = 3;
    unsigned long int uli = 123455676;
    unsigned long long int ulli = 123454556;

    char ch = 'b';
    unsigned char uch = 'u';

    float f = 0.333333;

    double dou = 0.34456454566;
    long double ldou = 0.34843084384398439843;

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
