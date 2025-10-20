/*
učitava dva broja i ispisuje geometrijsku i aritmetičku sredinu
unijetih brojeva.
*/
#include <stdio.h>
#include <math.h>

int main() {

    float a, b; //realni brojevi

    printf("Unesite dva realna broja: \n");
    scanf("%f%f", &a, &b);

    float aritm = (a + b) / 2;
    float geom = sqrt(a * b);

    printf("Aritmeticka sredina = %f\n", aritm);
    printf("Geometrijska sredina = %f\n", geom);

    return 0;
}