// Napisati program koji sa standardnog ulaza
//ucitava ocjene, po jednu u redu.
//Ocjene mogu da imaju vrijednosti a-f. 
//Ocjene mogu da budu zadate velikim slovima
//ili malim slovima.
//za svaku ocjenu stampati koliko se puta javila 
//ucitavanje se prekida kad se unese neka ocjena
//koja nije u validnom opsegu

#include <stdio.h>

int main() {

    int ca = 0, cb = 0, cc = 0, cd = 0, ce = 0, cf = 0;

    char o, space;
    scanf("%c%c", &o, &space);

    while('a' <= o && o <= 'f' || 'A' <= o && o <= 'F') {
        switch (o) {
        case 'a':
        case 'A':
            ca++;
            break;

        case 'b':
        case 'B':
            cb++;
            break;

        case 'c':
        case 'C':
            cc++;
            break;
        
        case 'd':
        case 'D':
            cd++;
            break;

        case 'e':
        case 'E':
            ce++;
            break;
        
        case 'f':
        case 'F':
            cf++;
            break;
        }

        scanf("%c%c", &o, &space);
    } 

    printf("A - %d\n", ca);
    printf("B - %d\n", cb);
    printf("C - %d\n", cc);
    printf("D - %d\n", cd);
    printf("E - %d\n", ce);
    printf("F - %d\n", cf);


    return 0;
}
