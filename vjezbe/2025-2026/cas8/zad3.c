#include <stdio.h>

void ucitaj_niz(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void stampaj_niz(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

void updateArray (int a, int b[], int n) {
    //svaki element niza veci od 0 umanjuje za a
    //svaki element niza manji od 0 uvecava za a
    for(int i=0;i<n;i++) {
        if(b[i] < 0)
            b[i] += a;
        else if(b[i] > 0)
            b[i] -= a;
    }

}

int main() {

    int n, a;
    scanf("%d%d", &n , &a);

    int arr[n];
    ucitaj_niz(arr, n);
    updateArray(a, arr, n);
    stampaj_niz(arr, n);
    return 0;
}