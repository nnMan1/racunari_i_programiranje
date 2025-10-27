/*
* Napisati program koji ucitava broj bodoava koje 
* je student osvoio na ispitu.
* Potrebno je stampati polozio ili pao u zavisnosti od 
* broja bodova.
* Student je polozio ako ima makar 50 bodova.
* Ako student ima makar 48 bodova, ali ima manje od 50 bodova, poklonicem o mu 2 poena.
*/

#include <stdio.h>

int main() {
    
    int br_bodova;
    printf("Unesite broj bodova: ");
    scanf("%d", &br_bodova);

    // if(br_bodova >= 48 && br_bodova < 50)
    //     br_bodova = br_bodova + 2;

    br_bodova = br_bodova + (br_bodova >= 48 && br_bodova < 50 ? 2 : 0);

    // if(br_bodova >= 50)
    //     printf("Polozio");
    // else
    //     printf("Pao");

    // br_bodova >= 50 ? printf("Polozio") : printf("Pao");

    // printf("%s", "Polozio");
    printf("%s", br_bodova >= 50 ? "Polozio" : "Pao");

    return 0;
}