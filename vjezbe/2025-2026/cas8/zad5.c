#include <stdio.h>
#include "my_lib.h"

int minArrayIndex(int a, int b[], int n) {
    //indeks minimalnog elementa niza b koji je veci od a
    int index = - 1;

    for(int i=0;i<n;i++) {
        if(b[i] > a) {
            if(index == - 1 || b[index] > b[i]) 
                index = i;
        }
    }

    return index;
}

int main() {
    int n, a;
    scanf("%d%d", &n, &a);

    int arr[n];
    ucitaj_niz(arr, n);
    int x = minArrayIndex(a, arr, n);
    printf("%d", x);
}