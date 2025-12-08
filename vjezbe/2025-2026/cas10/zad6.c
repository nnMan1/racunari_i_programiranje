#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_matricu_rand(int n, int m, int matr[][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            matr[i][j] = rand();
}

void print_matrix(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) { 
        for(int j=0;j<m;j++)
            printf("%13d ", matr[i][j]);
        printf("\n");
    }
}

void uvecaj_vrijednosti(int n, int m, int matr[][m]) {
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++)
            matr[i][j] ++;
}

void zbir_glavne(int n, int m ,int matr[][m]) {
    int zbir = 0;

    int br = n < m ? n : m;
    for(int i=0;i<br;i++)
        zbir += matr[i][i];

    return zbir;
}

void uvecaj_element(int a) {
    a++;
}

int main() {
    srand(time(NULL));

    int matr[5][6];

    // for(int i=0;i<5;i++)
    //     for(int j=0;j<6;j++)
    //         scanf("%d", &matr[i][j]);

    popuni_matricu_rand(5, 6, matr);

    // uvecaj_vrijednosti(5, 6, matr);
    for(int i=0;i<5;i++)
        for(int j=0;j<6;j++)
            uvecaj_element(matr[i][j]);

    print_matrix(5, 6, matr);

    return 0;
}