/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * opérateurs2.c
 */

#include <stdio.h>

int main(){
    int num1 = 1;
    int num2 = 0;
    char op = '&';

switch (op) {

case '+':
    printf("%d\n", num1 + num2); break;
case '-':
    printf("%d\n", num1 - num2); break;
case '*':
    printf("%d\n", num1 * num2); break;
case '/':
    printf("%d\n", num1 / num2); break;
case '%':
    printf("%d\n", num1 % num2); break;
case '&':
    printf("%d\n", num1 && num2); break;
case '|':
    printf("%d\n", num1 || num2); break;
case '~':
    printf("%d\n", (~ num1)); break;

default:
    printf("Mauvais opérateur\n"); return 1;

}




return 0;
}
