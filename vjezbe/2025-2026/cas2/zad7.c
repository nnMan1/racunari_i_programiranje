/*
ispituje da li je unijeti trocifreni broj Armstrongov. Broj je
Armstrongov ako je jednak zbiru kubova svojih cifara.
*/
#include <stdio.h>

int main() {

    int x;

    printf("Unesite trocifren broj x: ");
    scanf("%d", &x);
    
    int j = x % 10;
    int d = (x / 10) % 10;
    int s = x / 100;

    int zbir_kubova = j*j*j + d*d*d + s*s*s;

    if(x == zbir_kubova) //grana DA
        printf("Broj %d je Armstrongov", x);
    else //grana NE
        printf("Broj %d nije je Armstrongov", x);

    return 0;
}
