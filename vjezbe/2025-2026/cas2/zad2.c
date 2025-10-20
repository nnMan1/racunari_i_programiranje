#include <stdio.h>

int main() {

    int x; //koristicu pr. x koja je tipa cio broj
    int y;
    int z;

    // printf("Unesite vrijednost promjenjive x: ");
    // scanf("%d", &x); //ucitavam cio broj x

    // printf("Unesite vrijednost promjenjive y: ");
    // scanf("%d", &y); //ucitavam cio broj y
    printf("Unesite vrijednosti za x i y: ");
    scanf("%d%d", &x, &y);

    z = x + y;

    // printf("Vrijednost zbira je: ");
    // printf("Vrijednost zbira je: %d\n", z); //stampam promjenjivu koja je tipa cio broj
    printf("Vrijednost zbira je: %d\n", x + y);
    return 0;
}