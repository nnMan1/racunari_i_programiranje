/**
 * 10 studenata rade test. Bodovi (između 0 i 100) su
    dati. Naći prosječan broj bodova na testu.
 */

 #include <stdio.h>

 int main() {

    int zbir = 0;
    int cnt = 1;
    int ocjena;

    while(cnt <= 10) {
        printf("Unesite ocjenu za studenta %d: ", cnt);
        scanf("%d", &ocjena);
        zbir = zbir + ocjena;
        cnt = cnt + 1;
    }

    float prosjek = (float)zbir / 10;
    printf("Prosjek je: %f", prosjek);

    return 0;
 }