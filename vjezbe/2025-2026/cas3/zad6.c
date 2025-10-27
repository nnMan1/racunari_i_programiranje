/**
 * Prirodan broj n je Hemingov ako svi njegovi prosti djelioci pripadaju
 * skupu {2, 3, 5}. Prvi Hemingov broj je 2, pa zatim idu 3, 4=2*2, 5,
 * 6=2*3, 8=2*2*2, 9=3*3, 10=2*5, 12=2*2*3, 15=3*5, itd. Npr.
 * 14 nije Hemingov broj jer je 14=2*7, pa prosti djelioci broja 14 su 2
 * i 7 , a 7 ne pripada skupu {2, 3, 5}. Napisati program koji za dati
 * broj n provjerava da li je Hemingov, i ako jeste, štampa poruku
 * “Hemingov”, a ako nije, štampa “Nije Hemingov”.
 */

 #include <stdio.h>

 int main() {

    int n;
    scanf("%d", &n);

    while(n % 2 == 0)
        n /= 2;

    while(n % 3 == 0)
        n /= 3;

    while(n % 5 == 0)
        n /= 5;

    if(n == 1)
        printf("Hemingov");
    else
        printf("Nije Hemingov");

    return 0;
 }