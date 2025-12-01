#include <stdio.h>

int N = 1000;

int zbir_brojeva(int x, int y) {
    printf("N = %d\n", N);
    return x + y;
}

int razlika_brojeva(int x, int y) {
    return x - y;
}

void ucitaj_niz(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void stampaj_niz(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}
