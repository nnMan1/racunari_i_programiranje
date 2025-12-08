/*
Napisati metod void frekvencije(int[] b) koji za svaki element niza b štampa
koliko se puta taj element pojavljuje u nizu b. Smatrati da svi elementi niza b pripadaju
intervalu [1,100]*/
#include <stdio.h>

void read_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void frekvencije(int b[], int n) {
    int f[101] = {0};

    for(int i=0;i<n;i++)
        f[b[i]] ++;

    for(int i=0;i<n;i++)
        if(f[i] > 0)
            printf("%d: %d\n", i, f[i]);
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];
    read_array(arr, n);

    frekvencije(arr, n);

    return 0;
}