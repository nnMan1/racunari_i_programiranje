#include <stdio.h>

int main() {

    float x;
    scanf("%f", &x);

    int m;
    scanf("%d", &m);

    float sum = 0;

    float imen = 1;
    float broi = 1;

    for(int i=0;i<=m;i++) {
        sum += broi / imen;

        broi *= x;
        imen *= (i + 1);
    }

    printf("%f", sum);

    return 0;
}