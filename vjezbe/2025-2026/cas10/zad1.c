/*
Napisati metod int zeroElem(int [] b) koji vraća broj parova 
uzastopnih elemenata niza b koji završavaju sa bar jednom nulom.
*/
#include <stdio.h>

void read_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

int zeroElem(int arr[], int n) {
    int counter = 0;

    for(int i=0;i<n-1;i++)
        if(arr[i] % 10 == 0 && arr[i+1] % 10 == 0)
            counter ++;
            
    return counter;
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];
    read_array(arr, n);

    printf("%d", zeroElem(arr, n));

    return 0;
}