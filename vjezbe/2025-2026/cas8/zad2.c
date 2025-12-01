#include <stdio.h>

void ucitaj_niz(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void stampaj_niz(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

void uvecaj(int x) {
    x++;
}

void uvecaj_niz(int arr[], int n) {
    for(int i=0;i<n;i++)
        arr[i]++;
}

int main() {

    int x = 5;
    uvecaj(x);

    printf("%d\n", x);

    int arr[5] = {2, 4, 5, 4, 9};
    ucitaj_niz(arr, 5);
    
    // arr[0] = 2;
    // arr[1] = 4;
    // arr[2] = 3;
    // arr[3] = 5;
    // arr[4] = 6;

    // for(int i=0;i<5;i++)
    //     scanf("%d", &arr[i]);

    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);
    // printf("%d\n", arr[2]);
    // printf("%d\n", arr[3]);
    // printf("%d\n", arr[4]);
    // for(int i=0;i<5;i++)
    //     printf("%d\n", arr[i]);
    stampaj_niz(arr, 5); printf("\n");

    uvecaj_niz(arr, 5); 
    stampaj_niz(arr, 5); printf("\n");

    for(int i=0;i<5;i++)
        uvecaj(arr[i]);

    stampaj_niz(arr, 5); printf("\n");

    // char ime[10] = { 'V', 'e', 'l', 'i', 'b', 'o', 'r', '\0'};
    char ime[10] = "Velibor";
    printf("%s\n", ime);

    scanf("%s", ime);
    printf("%s", ime);

    for(int i=0;i<10;i++)
        printf("%c\n", ime[i]);

    return 0;
}