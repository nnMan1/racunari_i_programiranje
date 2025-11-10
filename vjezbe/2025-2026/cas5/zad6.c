/**
 * Za elemente niza x0, x1, x2,..,xn 
 * važi: x_0=a, x_1=b ..., x_n+2+2x_n+1+x_n=0, 0n. 
 * Napisati program koji učitava prirodne brojeve 
 * a, b i k i štampa x_k. 
 */
#include <stdio.h>

int main() {

    int a, b, k;

    scanf("%d%d%d", &a, &b, &k);

    ///uvijek ce a da bude x_i
    ///uvijek ce b da bude x_{i+1}

    for(int i=0;i<k;i++) {
        int v = -2 * b - a;
        a = b;
        b = v;
    }

    printf("%d", a);

    return 0;
}