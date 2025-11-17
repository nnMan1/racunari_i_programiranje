#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int baci_kocku() {
    return 1 + rand() % 6;
}

int baci_par_kocki() {
    int a = baci_kocku();
    int b = baci_kocku();

    return a + b;
}

void igra() {
    int bodovi = baci_par_kocki();

    if(bodovi == 7 || bodovi == 11) {
        printf("Pobjedio!!\n");
        return;
    }

    if(bodovi == 2 || bodovi == 3 || bodovi == 12) {
        printf("Izgubio.\n");
        return;
    }

    while(1) {
        int bodovi_2 = baci_par_kocki();

        if(bodovi == bodovi_2) {
            printf("Pobjedio!!\n");
            return;
        }

        if(bodovi_2 == 7) {
            printf("Izgubio.\n");
            return;
        }
    }
}

int main() {
    srand(time(NULL));

    for(int i=0;i<10;i++)
        igra();

    return 0;
}