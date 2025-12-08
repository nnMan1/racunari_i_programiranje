/*
Napisati metod int oddSegments(int [] b) koji za dati niz cijelih brojeva b vraća
dužinu najvećeg segmenta niza koji se sastoji samo od neparnih brojeva. Segment niza
sačinjavaju uzastopni elementi niza.
*/

#include <stdio.h>

void read_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

int oddSegments1(int b[], int n) {
    int rez = 0;

    for(int l=0;l<n;l++) {
        for(int r=l;r<n;r++) {
            int svi_neparni = 1;
            for(int i=l;i<=r;i++)
                if(b[i] % 2 == 0)
                    svi_neparni = 0;

            if(svi_neparni && r - l + 1 > rez)
                rez = r - l + 1;
        }
    }

    return rez;
}

int oddSegments2(int b[], int n) {
    int rez = 0;

    for(int l=0;l<n;l++) {
        for(int r=l;r<n;r++) {
            if(b[r] % 2 == 0)
                break;
            
            if(rez < r - l + 1)
                rez = r - l + 1;
        }
    }

    return rez;
}

int oddSegments3(int b[], int n) {
    int rez = 0;
    int tren = 0;

    for(int i=0;i<n;i++) {
        if(b[i] % 2 == 0) 
            tren = 0;
        else 
            tren ++;

        if(rez < tren)
            rez = tren;
    }

    return rez;
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];
    read_array(arr, n);

    printf("%d\n", oddSegments1(arr, n));
    printf("%d\n", oddSegments2(arr, n));
    printf("%d\n", oddSegments3(arr, n));


    return 0;
}