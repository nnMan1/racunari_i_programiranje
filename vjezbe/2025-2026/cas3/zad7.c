/**
 * za dati pozitivan cijeli broj a, 
 * određuje najmanje n, tako da a^n > 1000
 */

 #include <stdio.h>

 int main() {

    int a;
    scanf("%d", &a);

    int n = 0;
    int an = 1;

    while(an <= 1000) {
        an *= a;
        n ++;
    }

    printf("%d", n);

 }