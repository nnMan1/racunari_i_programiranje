/*
Napisati metod int powerOfTwo(int [] b) koji u dati niz cijelih brojeva b upisuje sve
cifre broja 2100. b[0] sadrži broj cifara broja 2100, a redom u b[1], b[2]... nalaze se cifra jedinica,
cifra desetica...
*/

#include <stdio.h>

void print_value(int arr[]) {
    for(int i=arr[0];i>0;i--)
        printf("%d", arr[i]);
} 

void zbir(int a[], int b[], int c[]) {

    int br_cif= a[0] > b[0] ? a[0] : b[0];
    br_cif += 1;

    for(int i=a[0]+1;i<=br_cif;i++) 
        a[i] = 0;

    for(int i=b[0]+1;i<=br_cif;i++)
        b[i] = 0;

    int prenos = 0;
    for(int i=1;i<=br_cif;i++) {
        c[i] = (prenos + a[i] + b[i]) % 10;
        prenos = (prenos + a[i] + b[i]) / 10;
    }

    if(c[br_cif] == 0)
        br_cif --;
    
    c[0] = br_cif;    
}

int veci(int a[], int b[]) {

}

void abs_razlika(int a[], int b[], int c[]) {
    
} 

void proizvod(int a[], int b[], int c[]) {
    int br_cif = a[0] + b[0];


}

void copy(int dest[], int src[]) {
    for(int i=1;i<=src[0];i++)
        dest[i] = src[i];
    dest[0] = src[0];
}

int main() {
    
    int x[100] = {1, 2};
    int pom[100] = {0};

    for(int i=0;i<99;i++) {
        zbir(x, x, pom);
        copy(x, pom);
    } 
    
    print_value(x);

    return 0;
}