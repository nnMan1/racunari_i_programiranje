#include <stdio.h>

void ucitaj_matricu(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d", &matr[i][j]);
}

int kraljevstvo(int n, int matr[n][n]) {

    if(n == 1)
        return matr[0][0];

    int sum = 0;

    //zbir prve vrste
    //zbir poslednje vrste
    for(int j=0;j<n;j++) {
        sum += matr[0][j];
        sum += matr[n-1][j];
    }

    //zbir prve kolone (bez prvog i poslednjeg elementa)
    //zbir poslednje kolone (bez prvog i poslednjeg elementa)
    for(int i=1;i<n-1;i++) {
        sum += matr[i][0];
        sum += matr[i][n-1];
    }
    
    return sum;
}

int main() {

    int n;
    scanf("%d", &n);

    int matr[n][n];
    ucitaj_matricu(n, n, matr);

    printf("%d", kraljevstvo(n, matr));

    return 0;
}