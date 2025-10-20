#include <stdio.h>

int main() {
    /* ovaj dio ne utice na program. 
    To je komentar u vise linija.
    int x;
    int j;
    int t; //komentar u jednoj liniji
    int d;
    int s;
    int z;
    Ovdje se zavrsava komentar u vise linija
    */

    int x, j, t, d, s, z;

    printf("Unesite trocifren broj ");
    scanf("%d", &x);

    j = x % 10;
    t = x / 10; //cijeli brojevi => cjelobrojno dijeljenje
    d = t % 10;
    s = t / 10;

    z = j + d + s;

    printf("Zbir cifara je %d", z);
}