/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * tableauptr.c
*/
#include <stdio.h>
#define SIZE 6

int main(){
    int tab_int[SIZE] = {
            1,2,3,
            4,5,6
    };
    float tab_float[SIZE] = {
            1.2,2.3,3.4,
            4.7,5.6,6.5
    };

    for (int i = 0; i < SIZE; i++){
        printf("Avant : \nTabint[%d] = %d\n", i, tab_int[i]);
        printf("Tabfloat[%d] = %f\n", i, tab_float[i]);
        if (i%2 == 0){
            *((int*) (tab_int+i)) = *((int*) (tab_int+i)) * 3; // Valeur du pointeur de type int incrémenté de i multipliée par 3
            *((float*) (tab_float+i)) = *((float*) (tab_float+i)) * 3;
        }
        printf("Après : \nTabint[%d] = %d\n", i, tab_int[i]);
        printf("Tabfloat[%d] = %f\n", i, tab_float[i]);
    }




    return 0;
}
