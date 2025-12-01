#include <stdio.h>
#include "my_lib.h"

int minArray(int a, int b[], int n) {
    //minimalni element niza b koji je veci od a
    int rez = a - 1;

    for(int i=0;i<n;i++) {
        if(b[i] > a) {
            if(rez == a - 1 || rez > b[i]) 
                rez = b[i];
        }
    }

    return rez;
}

int main() {
    int n, a;
    scanf("%d%d", &n, &a);

    int arr[n];
    ucitaj_niz(arr, n);
    int x = minArray(a, arr, n);
    printf("%d", x);
}