#include <stdio.h>
int main(){
    
    int a = 16;
    int b = 3;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    if (a > b){
        printf("a > b\n");
    }

    if (a >= b){
        printf("a >= b\n");
    }


    if (b < a){
        printf("b < a\n");
    }


    if (b <= a){
        printf("b <= a\n");
    }


    if (a != b){
        printf("a != b\n");
    }


    return 0;
}
