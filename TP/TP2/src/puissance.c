/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * puissance.c
*/
#include <stdio.h>

int main(){
    int b = 10;
    int a = 2;
    int result = 1;
    for(int i = 0; i < b; i++){
        result = result * a;
    }

    printf("%d\n", result);


    return 0;
}
