#include <stdio.h>

void ucitaj_niz(int n, int arr[]) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void stampaj_obrnuto(int n, int arr[]) {
    for(int i=n-1;i>=0;i--)
        printf("%d ", arr[i]);
}

int main() {
    
    int n;
    scanf("%d", &n);

    int arr[n];
    ucitaj_niz(n, arr);

    stampaj_obrnuto(n, arr);

    return 0;
}