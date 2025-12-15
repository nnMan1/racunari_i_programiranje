#include <stdio.h>

void stampaj_matricu(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%3d ", matr[i][j]);
        printf("\n");
    }
}

void zmija1(int n, int m, int matr[n][m]) {
    int br = 0; //sta trenutno upisujemo u matricu

    for(int i=0;i<n;i++) {
        if(i % 2 == 0) 
            for(int j=0;j<m;j++)    
                matr[i][j] = br++;
        else 
            for(int j=m-1;j>=0;j--)
                matr[i][j] = br++;
    }
}


int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];
    zmija1(n, m, matr);

    stampaj_matricu(n, m, matr);
    
    return 0;
}