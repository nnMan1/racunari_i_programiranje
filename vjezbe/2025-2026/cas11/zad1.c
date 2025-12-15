#include <stdio.h>

void ucitaj_matricu(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d", &matr[i][j]);
}

void stampaj_matricu(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%3d ", matr[i][j]);
        printf("\n");
    }
}

void zbir_po_kolonama(int n, int m, int matr[n][m]) {
    for(int j=0;j<m;j++) {
        int suma = 0;
        for(int i=0;i<n;i++)
            suma += matr[i][j];
        printf("%d ", suma);
    }
    printf("\n");
}

void zbir_po_vrstama(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) {
        int suma = 0;
        for(int j=0;j<m;j++)
            suma += matr[i][j];
        printf("%d ", suma);
    }
    printf("\n");
}

int zbir_iznad_glavne(int n, int matr[n][n]) {
    int suma = 0;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            suma += matr[i][j];

    return suma;
}

int zbir_ispod_glavne(int n, int matr[n][n]) {
    int suma = 0;

    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
            suma += matr[i][j];

    return suma;
}

int zbir_na_sporednoj(int n, int matr[n][n]) {
    int suma = 0;

    for(int i=0;i<n;i++)
        suma += matr[i][n-1-i];
    
    return suma;
}

int zbir_iznad_sporedne(int n, int matr[n][n]) {
    int suma = 0;

    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            suma += matr[i][j];

    return suma;
}

int zbir_ispod_sporedne(int n, int matr[n][n]) {
    
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];
    ucitaj_matricu(n, m, matr);

    printf("Zbir po kolonama");
    zbir_po_kolonama(n, m, matr);

    printf("Zbir po vrstama");
    zbir_po_vrstama(n, m, matr);

    printf("Zbir iznad glavne: %d\n", zbir_iznad_glavne(n, matr));
    printf("Zbir ispod glavne: %d\n", zbir_ispod_glavne(n, matr));
    printf("Zbir na sporednoj %d\n", zbir_na_sporednoj(n, matr));
    printf("Zbir iznad sporedne %d\n", zbir_iznad_sporedne(n, matr));

    return 0;
}

/*
4 4
2 5 6 4
1 5 9 7
6 4 3 5
3 4 2 8
*/