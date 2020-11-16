/*
 * Baptiste PELLARIN - 2020
 * <baptiste.pellarin@cpe.fr> - https://gitlab.com/bat553/cpe_algoc
 * chaine.c
*/

#include <stdio.h>

int main(){
    // Copie une chaine de caractères dans une autre chaine de caractère
    char str_original[6] = "testch";
    char str_copy[6];
    printf("%ld\n",sizeof(str_original));
    for(int i = 0; i < sizeof(str_original); i++){
        str_copy[i] = str_original[i];
    }
    printf("%s\n", str_copy);

    // Concatène deux chaines de caractères
    char str_concat[sizeof(str_original)+sizeof(str_copy)];

    for(int i = 0; i < sizeof(str_original)+sizeof(str_copy); i++){
        if (i < 6){
            str_concat[i] = str_original[i];
        } else {
            str_concat[i] = str_copy[i];
        }
    }

    printf("%s\n", str_concat);

    // Calcule le nombre de caractères dans une autre chaine de caractère
    printf("%ld\n", sizeof(str_concat));


    return 0;
}
