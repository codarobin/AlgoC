/*
 * Robin CODA - 2020
 * <robin.coda@cpe.fr> - https://github.com/codarobin/AlgoC
 * chercher_phrase.c
*/
#include <stdio.h>

#define TAILLEPHRASE 50
#define TAILLETABPHRASES 10

int main() {

    char phrases[TAILLETABPHRASES][TAILLEPHRASE] = {
            {"1234567889"},
            {"1234567790"},
            {"1234566890"},
            {"1234557890"},
            {"1234467890"},
            {"1233567890"},
            {"1224567890"},
            {"1134567890"},
            {"0134567890"},
            {"12345b7889"}
    };

    char phraseATrouver[TAILLEPHRASE] = {"12345b7889"};

    char* ptrPhraseDansTableau;
    char* ptrSurPhraseATrouver = &phraseATrouver[0];

    for (int t=0;t<TAILLETABPHRASES;t++)
    {
        ptrPhraseDansTableau = &phrases[t][0];
        for  (int i = 0; i<TAILLEPHRASE; i++)
        {
            // Si le caractère est différent, sortir de la boucle et tester sur un autre membre de la liste
            if (*(ptrSurPhraseATrouver+i) != *(ptrPhraseDansTableau+i))
            {
                break;
            }
            // Si on arrive à la fin de la chaine de caractères.
            if (i == TAILLEPHRASE-1)
            {
                printf("Trouvé ! %s\n", ptrPhraseDansTableau);
                t = TAILLETABPHRASES;
            }

        }
    }




    return 0;
}
