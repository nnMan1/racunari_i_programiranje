#include <stdio.h>

void stampaj_matricu(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%3d ", matr[i][j]);
        printf("\n");
    }
}

void popuni_nulama(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++)    
        for(int j=0;j<m;j++)
            matr[i][j] = 0;
}

void zmija2(int n, int m, int matr[n][m]) {
    int br = 0; //sta trenutno upisujemo u matricu

    popuni_nulama(n, m, matr);

    for(int d=0;d<n+m;d++) { //redni broj diagonale koju popunjavamo
        int i = 0;
        int j = d;

        while(i < n && j >= 0) {
            if(j<m)
                matr[i][j] = br++;

            i++;
            j--;
        }
    }    
}


int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];
    zmija2(n, m, matr);

    stampaj_matricu(n, m, matr);
    
    return 0;
}