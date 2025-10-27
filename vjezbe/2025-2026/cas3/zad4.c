/**
 * Napisati program za izračunavnje srednje ocjene koji će
 * obraditi proizvoljan broj studenata.
 * Ocjene se unose sve dok se ne unese ocjena -1.
 * Ocjena -1 ne ulazi u prosjek.
 * Ako nije unesen ni jedan broj osim -1, stampati poruku o gresci.
 */

 #include <stdio.h>

 int main() {

    int zbir = 0;
    int cnt = 0;
    int ocjena;

    printf("Unesite ocjenu ili -1 za kraj ulaza: ");
    scanf("%d", &ocjena);

    while(ocjena != -1) {
        zbir = zbir + ocjena;
        cnt = cnt + 1;
        printf("Unesite ocjenu ili -1 za kraj ulaza: ");
        scanf("%d", &ocjena);
    }

    if(cnt > 0) { 
        float prosjek = (float)zbir/cnt;
        printf("Prosjecna ocjena je: %f\n", prosjek);
    } else 
        printf("Unesite barem jednu ocjenu\n");

    return 0;
 }