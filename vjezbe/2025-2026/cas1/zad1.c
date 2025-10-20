#include <stdio.h>

int main() {

    int x; //promjenjiva x (cijelobrojna)
    int y; //promjenjiva y (cijelobrojna)
    int z;

    printf("x = ");
    scanf("%d", &x); //ucitavanje promjn. x

    printf("y = ");
    scanf("%d", &y); //ucitavanje promjn. x
    
    z = x + y;

    printf("%d + %d = %d", x, y, z); //stampa x + y = z
    
    return 0;
}