/*
Napisati metod int changeSign(int [] b) koji za dati niz nenultih cijelih brojeva b
vraća koliko se puta mijenja znak u nizu b posmatrajući elemente od početka. Na primjer, u
nizu 10, -4, 12, 56, -8, -9, znak se mijenjao 3 puta.
*/
#include <stdio.h>

void read_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

int changeSign(int arr[], int n) {
    int counter = 0;

    for(int i=0;i<n-1;i++)
        // if(arr[i] < 0 && arr[i+1] > 0 || arr[i] > 0 && arr[i+1] < 0)
        if(arr[i] * arr[i+1] < 0)
            counter ++;
            
    return counter;
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];
    read_array(arr, n);

    printf("%d", changeSign(arr, n));

    return 0;
}