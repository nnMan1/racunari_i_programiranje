/*
Napisati program koji ucitava dva broja.
Stampati u kakvom su odnosu ta dava broja.
Da li su jednaki
Da li su razliciti
Da li je prvi veci od drugog
Da li je drugi veci od prvog
Da li je prvi veci ili jednak od drugog
Da li je drugi veci ili jednak od prvog
*/

#include <stdio.h> 
int main() { 
    
    int x; 
    int y; 
    
    printf("Unesite dva broja: \n");
    scanf("%d%d", &x, &y);

    if(x == y) {
        printf("Brojevi su jednaki\n"); 
    } 

    if(x != y) 
        printf("Brojevi nisu jednaki\n");
    
    if(x < y) { 
        //ako imam vise od jedne naredbe unutar grane DA
        //moram da ih stavim unutar viticastih zagrada
        printf("Broj %d je manji od broja %d\n", x, y);
    }

    if(x > y) {
        printf("Broj %d je veci od broja %d\n", x, y);
    }

    if(x <= y) {
        printf("Broj %d je manji ili jednak od ", x);
        printf("broja %d\n", y);
    }

    if(x >= y) {
        printf("Broj %d je veci ili jednak od ", x);
        printf("broja %d\n", y);
    }
    
    return 0; 
}