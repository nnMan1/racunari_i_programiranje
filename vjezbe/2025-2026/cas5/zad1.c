#include <stdio.h>

int main() {

    int x = 5;

    switch(x) {
        case 1:
            printf("x ima vrijednost 1\n");
            break;
        case 2:
            printf("x ima vrijednost 2\n");
            break;
        case 3:
            printf("x ima vrijednost 3\n");
            break;
        default:
            printf("x ima vrijenost rzlicitu od 1, 2 ili 3\n");
    }
    return 0;
}