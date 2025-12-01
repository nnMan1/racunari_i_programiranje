#include <stdio.h>
#include "my_lib.h"

int M=1000;
extern int N;

void moja_funkcija() {
    static int x=5;
    printf("%d ", x);
    x++;
    printf("%d\n", N);
}

int main() {
    int x=7;
    moja_funkcija();
    moja_funkcija();
    printf("%d ", x);
    printf("%d\n", N);

    printf("%d\n", zbir_brojeva(5, 6));
    printf("%d\n", razlika_brojeva(5, 6));


    return 0;
}