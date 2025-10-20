/*
prevodi ugao zadat u radijanima u stepene
*/
#include <stdio.h>
#include <math.h>

int main() {

    float rad;
    float step;

    printf("Unesite ugao u radijanima: \n");
    scanf("%f", &rad);

    step = (180 / M_PI) * rad;

    printf("Vrijednost ugla u stepenima je: %f\n", step);

    return 0;
}